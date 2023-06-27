#include "main.h"
/**
* _puts- Entry point
*
* Description: prints a string.
*@str:string
* Return: Always 0 (Success)
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
