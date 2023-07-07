#include "main.h"
#include <ctype.h>
/**
* leet - Entry point
* Description: encodes a string into 1337.
* @ch :pointer
* Return: string
*/
char *leet(char *ch)
{
	char *ptr = ch;
	char num[] = {'4', '3', '0', '7', '1'};
	char c[] = {'A', 'E', 'O', 'T', 'L'};
	int i = 0;

	while (*ch != '\0')
	{
		i = 0;
		while (i < 5)
		{
			if (toupper(*ch) == c[i])
			{
				*ch = num[i];
			}
			i++;
		}
		ch++;
	}
	return (ptr);
}
