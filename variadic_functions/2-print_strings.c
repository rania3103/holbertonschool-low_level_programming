#include "variadic_functions.h"
/**
 * print_strings- entry point
 * Description: prints strings.
 * @separator:character
 * @n:unsigned integer
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);
	if (n > 0)
	{
		if (separator == NULL)
		{
			separator = "";
		}
		for (i = 0; i < n - 1; i++)
		{
			str = va_arg(ptr, char *);
			if (str == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("%s%s", str, separator);
			}
		}
		str = va_arg(ptr, char *);
		if (str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", str);
		}
	}
	else
	{
		printf("\n");
	}
	va_end(ptr);
}
