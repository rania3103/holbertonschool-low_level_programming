#include "main.h"
#include <stddef.h>
/**
* _strchr - Entry point
* Description:locates a character in a string.
* @s :pointer
* @c:char
* Return: char
*/
char *_strchr(char *s, char c)
{
	if (*s == c)
	{
		return (s);
	}
	while (*s != '\0')
	{
		s++;
	}
	if (s == c)
	{
			return (s);
	}
	return (NULL);
}
