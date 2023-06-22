
# include "main.h"
/**
* print_sign - Entry point
*
* Description: Prints prints the sign of a number.
*
* Return: Always 0 (Success)
*/
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		_putchar('+');
		test = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		test = 0;
	}
	else
	{
		_putchar('-');
		test = -1;
	}
	return (test);
}
