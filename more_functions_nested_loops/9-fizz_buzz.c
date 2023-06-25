#include <stdio.h>
/**
*main -Entry-point
*
* Description: print numbers 1 to 100 and fizzbuzz for some conditions.
*
* Return: Always 0 (Success)
*/
int main(void)
{
        int i;

        for (i = 1; i <= 100; i++)
        {
                if (i % 3 == 0)
                {
                        putchar('F');
                        putchar('i');
                        putchar('z');
                        putchar('z');
			putchar(' ');
                }
		else if (i % 5 == 0)
                {
                        putchar('B');                       
			putchar('u');
                        putchar('z');
			putchar('z');
			putchar(' ');
		}
		else if (i % 15 == 0)
                {
                        putchar('F');
                        putchar('i');
                        putchar('z');
                        putchar('z');
			putchar('B');
                        putchar('u');
                        putchar('z');
                        putchar('z');
			putchar(' ');
                }
		else
		{
			if (i < 10)
			{
				putchar(i + 48);
				putchar(' ');
			}
			else
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
