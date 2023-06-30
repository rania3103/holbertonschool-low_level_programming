#include "main.h"
/**
*  print_rev - Entry point
* 
* Description: prints a string in reverse.
* @s: pointer
* Return: void
*/
void print_rev(char *s)
{
    char* tmp = s;

    while (*s != '\0')
    {
        s++;
    }
    s -= 1;
    while (s >= tmp)
    {
        _putchar(*s);
        s--;
    }
_putchar('\n');
}