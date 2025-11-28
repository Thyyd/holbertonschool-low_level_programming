#include <unistd.h>
#include <stdio.h>

/**
* print_rev - prints a string from the end to the beggining
* @s: Pointer to a string we want to print reverted
*
* Return: Noting
*/

void print_rev(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}

for(int i = len; i > 0; i--)
{
write(1, &s[i-1], 1);
}

write(1, "\n", 1);
}
