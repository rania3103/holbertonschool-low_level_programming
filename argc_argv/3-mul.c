#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main -Entry point
 * Description: multipy 2 numbers .
 * @argc:argc
 * @argv:argv
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	res = (atoi(argv[1])) * (atoi(argv[2]));
	printf("%d\n", res);
	return (0);
}
