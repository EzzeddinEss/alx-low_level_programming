#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - this program assign random number and print the state of the number
 *
 * Return: Always zero.
 */

void positive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return;
}