#include "main.h"
/**
* rev_string - Entry point
* 
* Description: reverse a string.
* @s: pointer
* Return: void
*/
void rev_string(char *s)
{
    int nb = 0;
    char* b = s;
    char* e;
    char aux;

    while (*(s + nb) != '\0')
    {
        nb++;
    }
    e = s + (nb -1);
    
    while (b < e)
    {
        aux = *b;
        *b = *e;
        *e = aux;
        b++;
        e--;
    }
}