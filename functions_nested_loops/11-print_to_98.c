#include "main.h"
/**
* print_to_98 - Entry point
*
* Description: prints all natural numbers from n to 98.
*@n:integer
* Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 10)
		{
			_putchar(i + 48);
		}
		else
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
		}
		if (i < 0)
		{
			if (i > -10)
			{
				_putchar('-');
				_putchar((i * -1) % 10 + 48);
			}
			else
			{
				_putchar('-');
				_putchar((i * -1) / 10 + 48);
				_putchar((i * -1) % 10 + 48);
			}
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
