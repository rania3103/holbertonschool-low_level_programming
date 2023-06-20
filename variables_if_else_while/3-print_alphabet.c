#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase.
*
* Return: Always 0 (Success)
*/

/*code goes here*/
int main(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)
{
	putchar (l);
}
for (l = 'A'; l <= 'Z'; l++)
{
	putchar (l);
}
putchar ('\n');
return (0);
}
