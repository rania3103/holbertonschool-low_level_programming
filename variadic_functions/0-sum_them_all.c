#include "variadic_functions.h"
/**
 * sum_them_all- entry point
 * Description: calculate the sum of all its parameters.
 * @n:integer
 * Return:integer
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i, sum;

	va_start(ptr, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
