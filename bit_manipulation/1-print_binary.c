#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: The number to convert to binary and print.
*/
void print_binary(unsigned long int n)
{
	int k = 0;
	int shift = sizeof(unsigned long int) * 8 - 1;
	int bit = 0;

	while (shift >= 0)
	{
		bit = (n >> shift) & 1;
		if (bit == 1)
		{
			k = 1;
		}
		if (k == 1)
		{
			_putchar(bit + 48);
		}
		shift--;
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
