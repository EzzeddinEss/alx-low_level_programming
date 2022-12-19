#include "main.h"
/**
* _strlen - function that returns the length of a string
* @n: the parametr
* Return: the length of array
*/

int _strlen(char *n)
{
	int x = 0;

	while (n[x] != '\0')
	{
		x++;
	}
	return (x);

}
