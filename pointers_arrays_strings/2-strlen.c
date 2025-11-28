#include <stdio.h>

/**
* _strlen - calculs the length of a string
* @s: Pointer to a string we need to know the length
*
* Return: int, the length of the string.
*/

int _strlen(char *s)
{
int len = 0;
while(s[len] != '\0')
{
len++;
}
return len;
}
