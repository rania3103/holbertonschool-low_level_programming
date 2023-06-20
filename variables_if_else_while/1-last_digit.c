#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints whether a last digit of a random number isgreater than 5 or in less than 6 and not.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int ln = n % 10;
/* your code goes there */
if (ln > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n , ln);
}
else if (ln <6 && ln > 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n , ln);
}
else
{
printf("Last digit of %d is %d and is 0\n", n , ln);
}
return (0);
}
