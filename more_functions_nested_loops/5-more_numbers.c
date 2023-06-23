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
	char c[] = "01234567891011121314";
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 20; j++)
		{
			_putchar(c[j]);
		}
		_putchar('\n');
	}
}
