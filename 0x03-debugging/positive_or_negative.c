#include <stdio.h>

void postive_or_negative(int n)
{
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0); /* Assuming you want to return 0 in all cases */
}
