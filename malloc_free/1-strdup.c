#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - Entry point
* Description: copy string in a new allocated mmemory.
* @str :string
* Return: pointer
*/
char *_strdup(char *str)
{
	char *ptr;
	char *ptr2;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc((strlen(str) + 1) * sizeof(char));
	ptr2 = ptr;

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		*ptr = *str;
		str++;
		ptr++;
	}
	*ptr = '\0';
	return (ptr2);
	free(ptr);
}
