#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to be converted
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;

/*  Handle leading + or - */
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}

while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
{
/* Check for potential overflow */
if (result > (INT_MAX - (s[i] - '0')) / 10)
{
return sign == 1 ? INT_MAX : INT_MIN;
}

result = result * 10 + (s[i] - '0');
i++;
}

return sign * result;
}
