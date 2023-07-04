#include "main.h"
/**
* _strchr - Entry point
* Description:locates a character in a string.
* @s :pointer
* @c:char
* Return: char
*/
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*s != '\0')
	{
		if (*s == c)
		{
			ptr = s;
			continue;
		}
		s++;
	}
	return (ptr);
}
