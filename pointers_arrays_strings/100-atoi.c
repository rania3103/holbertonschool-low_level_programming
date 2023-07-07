#include "main.h"
/**
* _atoi - Entry point
* Description: convert a string to an integer.
* @s: pointer
* Return: void
*/
int _atoi(char *s)
{
	int sign = 1;
	int res;
	int num;

	while (*s != '\0')
	{
		if (*s == ' ')
		{
			s++;
			continue;
		}
		if (*s == '-')
		{
			s++;
			sign = -1;
		}
		if (*s < '0' || *s > '9')
		{
			res = 0;
		}
		if (*s >= '0' && *s <= '9')
		{
			num = *s - 48;
		}
		res = res * 10 + num;
		s++;
	}
	return (res * sign);
}
