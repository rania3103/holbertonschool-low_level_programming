#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _calloc - Entry point
* Description:allocates memory for an array using malloc.
* @size:unsigned int
* @nmemb:unsigned int
* Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, size * nmemb);
	free(ptr);
	return (ptr);
}
