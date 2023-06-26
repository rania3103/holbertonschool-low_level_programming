#include "main.h"
/**
* jack_bauer - Entry point
*
* Description: prints every minute of the day.
*
* Return: Always 0 (Success)
*/
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (m < 59)
	{
		while (h < 23)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar (h + 48);
			}
			else
			{
				_putchar (h / 10 + 48);
				_putchar (h % 10 + 48);
			}
			_putchar(':');
			if (m < 10)
			{
				_putchar('0');
				_putchar (m + 48);
			}
			else
			{
				_putchar (m / 10 + 48);
				_putchar (m % 10 + 48);
			}
			_putchar ('\n');
			m++;
			if (m > 59)
			{
				h += 1;
				m = 0;
			}
		}
	}
}
