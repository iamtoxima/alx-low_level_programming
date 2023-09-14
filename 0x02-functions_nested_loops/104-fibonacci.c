#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers
*
* Return: Always 0
*/
int main(void)
{
unsigned long i, a = 1, b = 2, next;

printf("%lu, %lu, ");

for (i = 3; i <= 98; ++i)
{
next = a + b;
printf("%lu", next);

if (i != 98)
printf(",");

a = b;
b = next;
}

printf("\n");

return (0);
}
