#include "main.h"
/**
* main - Entry point
*
* Description: swaps the values of two integers.
*@a:inetegr;
*@b:integer;
* Return: Always 0 (Success)
*/
void swap_int(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
