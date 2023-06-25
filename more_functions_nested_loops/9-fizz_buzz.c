#include "main.h"
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
                        _putchar('F');
                        _putchar('i');
                        _putchar('z');
                        _putchar('z');
			_putchar(' ');
                }
		else if (i % 5 == 0)
                {
                        _putchar('B');                       
			_putchar('u');
                        _putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if (i % 15 == 0)
                {
                        _putchar('F');
                        _putchar('i');
                        _putchar('z');
                        _putchar('z');
			_putchar('B');
                        _putchar('u');
                        _putchar('z');
                        _putchar('z');
			_putchar(' ');
                }
		else
		{
			if (i < 10)
			{
				_putchar(i + 48);
				_putchar(' ');
			}
			else
			{
				_putchar(i / 10 + 48);
				_putchar(i % 10 + 48);
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
	return (0);
}
