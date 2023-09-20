#include "search_algos.h"
/**
 * print_subarray - prints a subarray
 * @array: pointer
 * @b:beginning
 * @end:end
*/
void print_subarray(int *array, size_t b, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = b; i <= end; i++)
	{
		if (i == end)
		{
			printf("%d\n", array[i]);
			break;
		}
		printf("%d, ", array[i]);
	}
}
/**
 * binary_search - searches for a value in a sorted array.
 * @array:a pointer to the first element of the array to search in.
 * @size:the number of elements in array.
 * @value:the value to search for.
 * Return:index
*/
int binary_search(int *array, size_t size, int value)
{
	size_t b = 0, end = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (b <= end)
	{
		print_subarray(array, b, end);
		mid = (end + b) / 2;
		if (array[mid] < value)
			b = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
