#include "main.h"

/**
* puts_half - prints half of a string
* @str: the string to be printed
*/
void puts_half(char *str)
{
int length = 0, i;

/*  Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}

/*  Print the second half of the string */
for (i = (length + 1) / 2; i < length; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
