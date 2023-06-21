# include "main.h"
/**
* print_alphabet_x10 - Entry point
*
* Description: Prints 10 times the alphabet, in lowercase.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i = 0;
char c = 'a';
while (i < 10)
{
	while( c <= 'z')
	{	
		_putchar(c);
		c++;
	}
	_putchar('\n');
	i++;
	c='a';
}
}
