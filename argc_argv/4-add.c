#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main -Entry point
 * Description: add positive numbers .
 * @argc:argc
 * @argv:argv
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int res = 0;
	int i = 0;
	int j = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i < argc)
	{
		while(argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' && argv[i][j] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
			j++;
		}
		res += atoi(argv[i]);
		i++;  
	}
	printf("%d\n", res);
	return (0);
}
