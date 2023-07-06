#include "main.h"
/**
* test_prime - Entry point
* Description:test if the number is prime.
* @n :integer
* @d :integer
* @nb :integer
* Return: 1 if the input is prime number
*/
int test_prime(int n, int d, int nb)
{
	if (d > n)
	{
		return (nb);
	}
	if (n % d == 0)
	{
		return (test_prime(n, d + 1, nb + 1));
	}
	return (test_prime(n, d + 1, nb));
}


/**
* is_prime_number - Entry point
* Description:test if the number is prime.
* @n :integer
* Return: 1 if the input is prime number
*/
int is_prime_number(int n)
{
	if (test_prime(n, 1, 0) == 2 && n != 1)
	{
		return (1);
	}
	return (0);
}

