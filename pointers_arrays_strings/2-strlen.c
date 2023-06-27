#include "main.h"
/**
* _strlen - Entry point
*
* Description: returns the length of a string..
*@s:string;
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
