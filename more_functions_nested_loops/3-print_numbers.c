#include "main.h"
/**
* print_numbers - Entry point
*
* Description: prints the numbers, from 0 to 9.
*
* Return: Always 0 (Success)
*/
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
