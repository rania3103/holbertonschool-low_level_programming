#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another.
 * @n:number1
 * @m:number2
 * Return:the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR;
	unsigned int nb;

	XOR = n ^ m;
	nb = 0;

	while (XOR != 0)
	{
		nb += XOR & 1;
		XOR >>= 1;
	}
	return (nb);
}
