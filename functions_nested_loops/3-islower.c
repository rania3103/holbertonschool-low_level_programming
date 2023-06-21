/**
* _islower - Entry point
*
* Description: checks for lowercase character..
*
* Return: Always 0 (Success)
*/
int _islower(int c)
{
	int asc = 97;
	int test = 0;

	while (asc <= 122)
	{
		if (c == asc)
		{
			test = 1;
		}
		asc++;
	}
	return (test);
}
