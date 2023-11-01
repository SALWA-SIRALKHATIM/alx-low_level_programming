#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two stringa.
 * @s1: string to be concatenated.
 * @s2: string to be concatenated.
 * Return: String concatenated.
 */
char *str_concat(char *s1, char *s2)
{
	char *array = NULL;
	unsigned int x = 0, y = 0, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	array = malloc((x + y + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		array[z] = s1[z];
	x = z;
	for (z = 0; z < y; z++)
	{
		array[x] = s2[z];
		x++;
	}
	array[x] = '\0';
	return (array);
}
