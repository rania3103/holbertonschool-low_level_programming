#include "main.h"
/**
* puts_half - Entry point
* 
* Description: print second half of a string.
* @str: pointer
* Return: void
*/
void puts_half(char *str)
{
    int nb = 0;
    char* half;
    char* e;

    while (*(str + nb) != '\0')
    {
        nb++;
    }
    if (nb % 2 != 0)
    {
        nb -= 1;
    }
    half = str + (nb/2);
    e = str + nb;
    while (half <= e)
    {
        _putchar(*half);
        half++;
    }
    _putchar('\n');
}