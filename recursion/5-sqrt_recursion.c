#include "main.h"
/**
* test_sqrt - Entry point
* Description: test the sqrt of n.
* @i :integer
* @j :integer
* Return:integer
*/
int test_sqrt(int i, int j)
{
	if (j < 0 || i * i > j)
	{
		return (-1);
	}
	if (i * i == j)
	{
		return (i);
	}
	return (test_sqrt(i + 1, j));
}

/**
* _sqrt_recursion - Entry point
* Description: sqrt of n.
* @n :integer
* Return:integer
*/
int _sqrt_recursion(int n)
{
	return (test_sqrt(1, n));
}
