#include <stdio.h>
#include "main.h"
/**
 * main -Entry point
 * Description: prints all arguments .
 * @argc:argc
 * @argv:argv
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
