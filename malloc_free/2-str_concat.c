#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* str_concat - Entry point
* Description: concat 2 strings
* @s1 :string
* @s2 :string
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	char *ptr2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	ptr2 = ptr;

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		*ptr = *s1;
		s1++;
		ptr++;
	}
	while (*s2 != '\0')
	{
		*ptr += *s2;
		s2++;
		ptr++;
	}
	*ptr = '\0';
	return (ptr2);
}
