/**
* _abs - Entry point
*
* Description: a function that computes the absolute value of an integer.
*@n:integer
* Return: Always 0 (Success)
*/
int _abs(int n)
{
	int test = 0;

	if (n < 0)
	{
		test = -2 * n + n;
	}
	else
	{
		test = n;
	}
	return (test);
}
