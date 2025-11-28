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

int main()
{
    int a = 100, b = 25;
    printf("Before swap, a = %d and b = %d \n", a, b);
    swap_int(&a, &b);
    printf("After swap, a = %d and b = %d \n", a, b);
}