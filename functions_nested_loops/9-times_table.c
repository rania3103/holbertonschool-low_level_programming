#include "main.h"

/**
* times_table- Entry point
*
* Description: prints the 9 times table, starting with 0.
*
* Return: Always 0 (Success)
*/
void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		int res = i * j;

		if (res <= 9)
		{
			_putchar(res + 48);
			if (j < 9)
			{
				_putchar(',');
			}
			_putchar(' ');
			_putchar(' ');
		}
		else
		{
			_putchar(res / 10  + 48);
			_putchar(res % 10 + 48);
			if (j < 9)
			{
				_putchar(',');
			}
			_putchar(' ');
		}
	}
	_putchar('\n');
}
}
