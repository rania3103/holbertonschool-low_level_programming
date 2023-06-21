#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints all possible combinations of single-digit numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 48;
while (n <= 56)
{
	putchar(n);
	putchar (',');
	putchar(' ');
	n++;
}
putchar(57);
return (0);
}
