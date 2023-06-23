#include "main.h"
/**
* _isdigit - Entry point
*
* Description:checks for a digit (0 through 9).
*@c:number
* Return: Always 0 (Success)
*/
int _isdigit(int c)
{
	int test = 0;

	if (c >= 48 && c <= 57)
	{
		test = 1;
	}
	return (test);
}
