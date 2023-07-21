#include "variadic_functions.h"
/**
 * print_numbers- entry point
 * Description: prints numbers.
 * @separator:character
 * @n:unsigned integer
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	if (separator && n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d%s ", va_arg(ptr, int), separator);
		}
		printf("%d\n", va_arg(ptr, int));
	}
	va_end(ptr);
}
