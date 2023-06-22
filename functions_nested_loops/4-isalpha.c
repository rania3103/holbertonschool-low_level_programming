/**
* _isalpha - Entry point
*
* Description: checks for alphabetic character.
*c:character
* Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	int test = 0;
	if ( ( c >= 65 && c <= 90) || ( c >= 84 && c <= 122) )
	{
		test = 1;
	}
	return (test);
}
