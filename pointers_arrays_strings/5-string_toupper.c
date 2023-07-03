#include "main.h"
/**
* string_toupper - Entry point
* Description: change string char to uppercase.
* @ch :pointer
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