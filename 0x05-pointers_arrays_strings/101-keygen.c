#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generates random valid passwords for 101-crackme
* Return: Always 0
*/
int main(void)
{
int sum = 2772; /* Sum of ASCII values of known characters */
int rand_num;
char password[100];
int i;

srand(time(0)); /* Seed for the random number generator */

for (i = 0; i < 99; i++) /* Changed loop condition */
{
/* Generate random printable ASCII characters between 33 and 126 */
rand_num = rand() % (126 - 33 + 1) + 33;
password[i] = rand_num;
sum -= rand_num;
if (sum <= 0) /* Changed condition to <= */
{
password[i + 1] = sum + rand_num; /* Added rand_num */
break;
}
}

password[i + 2] = '\0'; /* Add null terminator */

printf("%s", password);

return 0;
}
