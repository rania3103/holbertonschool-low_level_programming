#include "main.h"
/**
* _strcat - Entry point
* 
* Description: concatenate 2 strings.
* @dest: pointer
* @src: pointer
* Return: character
*/
char *_strcat(char *dest, char *src)
{
    char* ptr = dest;

    while (*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return (ptr);
}