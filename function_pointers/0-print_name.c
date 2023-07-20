#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - entry point
 * Description: print name.
 * @name:string
 * @f:pointer to void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
