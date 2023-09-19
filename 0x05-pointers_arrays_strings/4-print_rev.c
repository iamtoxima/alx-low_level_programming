#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: the string to be printed
*/
void print_rev(char *s)
{
int i = 0;

/* Find the length of the string */
while (s[i] != '\0')
{
i++;
}

/*  Print the string in reverse order */
for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
