#include "main.h"
/**
*print_rev- Entry point
*
*Description: prints a string in reverse.
*@s:string
*Return: Always 0 (Success)
*/
void print_rev(char *s)
{
char* tmp = s;
while (*s != '\0')
{
    s++;
}
while(s > tmp)
{
    _putchar(*s);
    s--;
}
_putchar('\n');
}
