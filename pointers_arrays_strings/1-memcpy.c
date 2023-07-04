#include "main.h"
/**
* _memcpy - Entry point
* Description:copies memory area.
* @dest :pointer
* @src :pointer
* @n:unsigned int
* Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (ptr);
}
