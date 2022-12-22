#include "main.h"

/**
* *_strncat - a function that concatenates two strings.
* @dest: connection pointer.
* @src:the string source.
* @n:parameter
* Return:pointer to the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
