#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Alocates a 2d array of integers
 * @width: Width of grid
 * @height: Height of the grid
 * Return: Pointer to the newly allocated 2d array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = (int *)malloc(width * sizeof(int));
		if (grid[a] ==  NULL)
		{
			for (b = 0; b < a; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenate two strings into one string
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, k = 0, l = 0;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
l = i + j;
s = malloc(sizeof(char) * (l + 1));
if (s == NULL)
return (NULL);
i = 0;
while (s1[i] || s2[i - l + j])
{
if (s1[i])
s[k++] = s1[i];
if (s2[i - l + j])
s[k++] = s2[i - l + j];
i++;
}
s[k] = '\0';
return (s);
}
