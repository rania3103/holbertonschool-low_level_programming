#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the lowercase alphabet in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
int c = 97;
while (c <= 122)
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
