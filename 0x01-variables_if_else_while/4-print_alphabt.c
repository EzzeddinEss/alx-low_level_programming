#include <stdio.h>
#include <time.h>

/**
 * main - a program that print lowercase alphabet except q and e
 *
 * Return: always zero
 */

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'q' || alphabet != 'e')
putchar(alphabet);
}
putchar('\n');
return (0);
}
