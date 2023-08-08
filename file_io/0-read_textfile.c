#include "main.h"
/**
 * read_textfile - reads a file and prints the POSIX standard output.
 * @letters: the number of letters it should read and print.
 * @filename:pointer to a file.
 * Return:the actual number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdesc, r, w;
	char *container;

	if (filename == NULL)
	{
		return (0);
	}
	fdesc = open(filename, O_RDONLY);
	if (fdesc == -1)
	{
		return (0);
	}
	container = malloc(letters * sizeof(char));
	if (container == NULL)
	{
		return (0);
	}
	r = read(fdesc, container, letters);
	if (r == -1)
	{
		return (0);
	}
	w = write(1, container, r);
	if (w == -1)
	{
		return (0);
	}
	close(fdesc);
	return (w);
}
