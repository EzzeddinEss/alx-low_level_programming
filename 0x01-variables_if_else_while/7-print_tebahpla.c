#include <stdio.h>
#include <time.h>

/**
 * main - a program that print lowercase alphapet in reverse.
 *
 * Return: Always zero
 */

int main(void)
{
char alphabet;
for (alphabet = 'z' ; alphabet >= 'a'; alphabet--)
putchar(alphabet);
putchar('\n');
return (0);
}