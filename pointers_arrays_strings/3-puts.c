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


int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}