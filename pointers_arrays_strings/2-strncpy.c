#include "main.h"
/**
* _strncpy - Entry point
* Description: copy string.
* @dest: pointer
* @src: pointer
* @n: integer
* Return: character
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (ptr);
}
