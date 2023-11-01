#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array and initializes it with a specific char
 * @c: char used to initialize
 * @size: the size of the array
 *
 * Return: Array of chars.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		array[j] = c;
	return (array);
}
