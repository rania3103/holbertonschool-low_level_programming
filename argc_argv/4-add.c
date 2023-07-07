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

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i < argc)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!(isdigit(argv[i][j])))
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
