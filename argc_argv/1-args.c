#include <stdio.h>
#include "main.h"
/**
 * main -Entry point
 * Description: print the number of arguments.
 * @argc:argc
 * @argv:argv
 * Return: 0
*/
int main(int argc, char *argv[])
{
	(void)*argv;
	argc-=1;
	printf("%d\n", argc);
	return (0);
}
