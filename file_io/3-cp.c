#include "main.h"
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
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdesc1 = open(file_from, O_RDONLY);
	if (fdesc == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exist(98);
	}
	fdesc2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fdesc2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exist(99);
	}
	if (container != NULL)
	{
		r = read(fdesc1, container, sizeof(container));
		w = write(fdesc2, container, r);
		if (w == -1)
		{
			dprintf("Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (close(fdesc1) == -1)
	{
		dprintf("Error: Can't close fd %d\n", fdesc1);
		exit(100);
	}
	return (0);
}
