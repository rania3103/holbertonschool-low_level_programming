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
    char num[] = {'4','3','0','7','1'};
    char c[]= {'a','e','o','t','l'};
	int i = 0;

    while (*ch != '\0')
    {
        while (i < 5)
        {
            if (toupper(*ch) == toupper(c[i]))
            {
                *ch = num[i];
				break;
            }
			i++;
        }
		ch++;
    }
    return (ptr);
}