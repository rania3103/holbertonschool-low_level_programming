#include "function_pointers.h"
/**
 * array_iterator - entry point
 * Description: print name.
 * @array:array
 * @size:size
 * @action:pointer to void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
