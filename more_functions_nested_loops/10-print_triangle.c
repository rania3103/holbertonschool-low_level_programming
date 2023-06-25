#include "main.h"
/**
* print_triangle- Entry point
*
* Description: Prints triangle.
*@size:integer
* Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
