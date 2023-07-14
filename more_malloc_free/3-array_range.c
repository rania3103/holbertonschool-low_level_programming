#include "main.h"
#include <stdlib.h>
/**
* array_range - Entry point
* Description:creates an array of integers.
* @min:int
* @max:int
* Return:pointer
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int nb = 0;
	int j = 0;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		nb += 1;
	}
	ptr = malloc(sizeof(int) * nb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
