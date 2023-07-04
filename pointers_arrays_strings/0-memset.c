#include "main.h"
/**
* _memset - Entry point
* Description:fills memory with a constant byte.
* @s :pointer
* @ b :char
* @ n:unsigned int
* Return: integer
*/
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;
    unsigned int i = 0;

    while (i < n)
    {
        *s = b;
        s++;
        i++;
    }
    return (ptr);
}