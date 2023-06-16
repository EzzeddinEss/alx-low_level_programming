#include <stdio.h>

/**
 * main - a program that prints all possible combinations of single digit.
 *
 * Return: Always zero
 */

int main(void)
{
int N = 0;
while (N < 10)
{
putchar(N + '0');
if (N < 9)
{
putchar(',');
putchar(' ');
}
N++;
}
putchar('\n');
return (0);
}
