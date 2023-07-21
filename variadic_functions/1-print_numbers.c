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
	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (separator == NULL)
			{
				printf("%d", va_arg(ptr, int));
			}
			else
			{
				printf("%d%s", va_arg(ptr, int), separator);
			}
		}
		printf("%d\n", va_arg(ptr, int));
	}
	else
	{
		printf("\n");
	}
	va_end(ptr);
}
