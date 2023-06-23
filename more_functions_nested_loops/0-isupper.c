#include "main.h"
/**
* _isupper - Entry point
*
* Description:checks for uppercase character.
*@c:character
* Return: Always 0 (Success)
*/
int _isupper(int c)
{
	int test = 0;

	if (c >= 'A' && c <= 'Z')
	{
		test = 1;
	}
	return (test);
}
