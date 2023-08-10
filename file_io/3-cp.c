#include "main.h"
/**
 * print_message - prints message
 * @msg:the msg to be printed.
 * @filename:name of the file.
 * @excode: exit code.
*/
void print_message(char *msg, char *filename, int excode)
{
	dprintf(2, msg, filename);
	exit(excode);
}
/**
 * main - entry point
 * Description: copies the content of a file to another file.
 * @argc:count of arguments.
 * @argv:the vector of arguments.
 * Return:0 on success
 */
int main(int argc, char *argv[])
{
	int fdesc1, fdesc2, r, w;
	char *file_to, *file_from;
	char container[1024];

	file_to = argv[2];
	file_from = argv[1];
	if (argc != 3)
		print_message("Usage: cp file_from file_to\n", "", 97);
	fdesc1 = open(file_from, O_RDONLY);
	if (fdesc1 == -1)
		print_message("Error: Can't read from file %s\n", file_from, 98);
	fdesc2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdesc2 == -1)
		print_message("Error: Can't write to %s\n", file_to, 99);
	while ((r = read(fdesc1, container, sizeof(container))) > 0)
	{
		w = write(fdesc2, container, r);
		if (w == -1)
			print_message("Error: Can't write to %s\n", file_to, 99);
	}
	if (r == -1)
	{
		print_message("Error: Can't read from file %s\n", file_from, 98);
	}
	if (close(fdesc1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdesc1);
		exit(100);
	}
	if (close(fdesc2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdesc2);
		exit(100);
	}
	return (0);
}
