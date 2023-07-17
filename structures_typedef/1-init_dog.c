#include "dog.h"
/**
 * init_dog - entry point
 * Description:initialize a variable of type struct dog.
 * @d:alias
 * @name:string
 * @age: float
 * @owner:string
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
