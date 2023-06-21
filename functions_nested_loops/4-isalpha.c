/**
* _isalpha - Entry point
*
* Description: checks for alphabetic character.
*
* Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	int test = 0;
	int asc = 65;
	while (asc <= 122)
	{
		if (asc >= 91 && asc <= 96)
		{
			break;
		}
		if (c == asc)
		{
			test = 1;
		}
	asc++;
	}
return (test);
}
