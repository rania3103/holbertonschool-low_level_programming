#include "main.h"
/**
* reverse_array - Entry point
* Description: concat 2 strings.
* Return: string
*/
char *string_toupper(char *ch)
{
	char *ptr = ch;
	while (*ch != '\0')
	{
		if (*ch >= 'a' && *ch <= 'z')
		{
			*ch -= 32;
		}
		ch++;
	}
	return (ptr);
}