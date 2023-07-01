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
    char* ptr = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (ptr);
}