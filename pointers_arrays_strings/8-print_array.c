#include "main.h"
#include <stdio.h>
/**
* print_array - Entry point
* Description: print elements of an array.
* @n: integer
* @a:array
* Return: void
*/
void print_array(int *a, int n)
{
	int *e = a + n;
	int *b = a;

	while (b < e)
	{
		if (b == e - 1)
		{
			printf("%d", *b);
		}
		else
		{
			printf("%d, ", *b);
		}
		b++;
	}
	printf("\n");
}
