#include <stdio.h>
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
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (i == 100)
	{
		printf("Buzz");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz ");
	}
	else
	{
		printf("%d ", i);
	}
}
printf("\n");
return (0);
}
