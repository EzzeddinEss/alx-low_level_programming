#include <stdio.h>
#include <time.h>

/**
 * main - a program to print alphabet in lower case.
 *
 * Return: Alwayes zero
 */

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
