#include "main.h"
/**
* _strncat - Entry point
* Description: concat 2 strings.
* @dest: pointer
* @src: pointer
* @n: integer
* Return: character
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	return (ptr);
}
