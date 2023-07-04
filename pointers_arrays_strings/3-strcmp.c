#include "main.h"
/**
* _strcmp - Entry point
* Description:compare two strings.
* @s1 :pointer
* @s2 :pointer
* Return: integer
*/
int _strcmp(char *s1, char *s2)
{
    int test = 0;
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            test = *s1 - *s2;
        }
        s1++;
        s2++;
    }
    return (test);
}