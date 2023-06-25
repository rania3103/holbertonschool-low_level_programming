#include "main.h"
/**
* print_diagonal - Entry point
*
* Description: draws a diagonal line on the terminal.
*@n:inetegr
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
