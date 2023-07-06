#include <stdio.h>
#include "main.h"
/**
 * main -Entry point
 * Description: a program that prints its name.
 * @argc:argc
 * @argv:argv
 * Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
