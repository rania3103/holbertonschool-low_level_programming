#include "main.h"
/**
* print_line - Entry point
*
* Description: draws a straight line in the terminal.
*@n: integer
* Return: Always 0 (Success)
*/
void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
		_putchar('\n');
}
