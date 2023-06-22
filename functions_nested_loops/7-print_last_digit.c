#include "main.h"
/**
* print_last_digit - Entry point
*
* Description: prints the last digit of a number.
*@n: number
* Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = (-n) % 10;
	}
	else
	{
		x = n % 10;
	}
	_putchar(x + 48);
	return (x);
}
