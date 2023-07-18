#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - entry point
 * Description:frees dogs.
 * @d:alias
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
