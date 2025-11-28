#include <unistd.h>
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
write(1, &str[len], 1);
len++;
}
write(1, "\n", 1);
}
