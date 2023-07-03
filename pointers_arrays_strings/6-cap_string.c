#include "main.h"
/**
* cap_string - Entry point
* Description: capitalize all words of a string.
* @ch :pointer
* Return: string
*/
char *cap_string(char *ch)
{
	char *ptr = ch;

	while (*ch != '\0')
	{
		if (*ch >= 'a' && *ch <= 'z')
		{
			*ch -= 32;
		}
		if (*ch == ' ' || *ch == '"' || *ch == ',' || *ch == ';' || *ch == '?' || *ch =='!' || *ch =='{' || *ch =='}' || *ch =='(' || *ch ==')' || *ch == '.' || *ch == '\t' || *ch == '\n')
		{
			ch++;
			if (*ch >= 'a' && *ch <= 'z')
			{
				*ch -= 32;
			}
		}
		else
		{
			ch++;
		}
	}
	return (ptr);
}