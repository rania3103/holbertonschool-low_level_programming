#include "main.h"
/**
* puts2 - Entry point
* 
* Description: print every other caracter of a string.
* @str: pointer
* Return: void
*/
void puts2(char *str)
{
    int i = 0;
    while (*(str + i) != '\0')
    {
        if (i % 2 == 0)
        {
            _putchar(*(str+i));
        }
        i++;
    }
    _putchar('\n');
}