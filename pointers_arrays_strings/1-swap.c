#include <stdio.h>

/**
* swap_int - exchange the values pointed to by a and b.
* @a: Pointer to an integer to update
* @b: Pointer to an integer to update
*
* Return: Nothing.
*/

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
