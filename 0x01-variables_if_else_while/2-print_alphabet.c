include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print
 * the letters of the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}