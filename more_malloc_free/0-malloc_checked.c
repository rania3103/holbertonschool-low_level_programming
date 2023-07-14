#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - Entry point
* Description:allocate memory with malloc.
* @b :unsigned int
* Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
