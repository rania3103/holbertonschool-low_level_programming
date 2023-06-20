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
	if (l == 'q' || l == 'e')
	{
		l++;
	}
	putchar (l);
}
putchar ('\n');
return (0);
}
