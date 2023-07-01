#include "main.h"
/**
* _strcpy - Entry point
* 
* Description: copy string.
* @dest: pointer
* @src: pointer
* Return: void
*/
char *_strcpy(char *dest, char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    return dest;
}