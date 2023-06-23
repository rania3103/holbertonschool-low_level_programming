#include "main.h"
/**
* more_numbers- Entry point
*
* Description: prints 10 times the numbers, from 0 to 14.
*
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				_putchar(j + 48);
			}
			else
			{
				_putchar(j / 10 + 48);
				_putchar(j % 10 + 48);
			}
		}
		_putchar('\n');
	}
}
