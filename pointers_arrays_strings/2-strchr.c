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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == '\0')
		{
			return (NULL);
		}
		if (*s != c)
		{
			return ("nil");
		}
		s++;
	}
	return (s);
}
