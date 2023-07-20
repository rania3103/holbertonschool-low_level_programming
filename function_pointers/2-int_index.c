#include "function_pointers.h"
/**
 * int_index - entry point
 * Description: search for an element in array.
 * @array:array
 * @size:int
 * @cmp:pointer to function
 * Return:index of the element to be searched
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array)
	{
		for (i = 0;i < size; i++)
		{
			if(cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
