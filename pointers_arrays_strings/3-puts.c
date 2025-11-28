#include <stdio.h>

/**
* _puts - prints a string
* @str: Pointer to a string we want to print
*
* Return: Noting
*/

void _puts(char *str)
{
int len = 0;
while (str[len] != '\0')
{
printf("%c", str[len]);
len++;
}
printf("\n");
}
