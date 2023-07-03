#include "main.h"
/**
* reverse_array - Entry point
* Description: concat 2 strings.
* @a: pointer
* @n: integer
* Return: array
*/
void reverse_array(int *a, int n)
{
    int* b = a;
    int* e = a + (n - 1);
    int num;
    while (e > b)
    {
        num = *b;
        *b = *e;
        *e = num;
        b++;
        e--;
    }
}


