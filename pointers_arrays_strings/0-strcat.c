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
    int nb = 0;

    while (*dest != '\0')
    {
        dest++;
        nb++;
    }
    while (*src != '\0')
    {
        *(dest + nb)=*src;
        nb++;
        src++;
    }
    *dest += '\0';
    return (ptr);
}