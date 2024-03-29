#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a func that returns a pointer to a 2D array of integers.
 * @width: the width of the array.
 * @height: the height of the array
 *
 * Return: if wid or hei is zero or less Null, null in failure.
 */

int **alloc_grid(int width, int height)
{
int **tdarr, x, y;
tdarr = malloc(sizeof(*tdarr) * height);
if (width <= 0 || height <= 0)
return (NULL);
else if (tdarr == 0)
return (NULL);
for (x = 0; x < height; x++)
{
tdarr[x] = malloc(sizeof(**tdarr) * width);
if (tdarr[x] == NULL)
{
while (x >= 0)
{
free(tdarr[x]);
x--;
}
free(tdarr);
return (NULL);
}
for (y = 0; y < width; y++)
tdarr[x][y] = 0;
}
return (tdarr);
}
