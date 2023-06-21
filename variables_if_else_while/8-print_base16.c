#include <stdio.h>
/**
* main - Entry point
*
* Description: prints all the numbers of base 16 in lowercase.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c = '0';
char ci = 'a';
while (c <= '9')
{
	putchar(c);
	c++;
}
while (ci <= 'f')
{
	putchar(ci);
	ci++;
}
putchar('\n');
}
