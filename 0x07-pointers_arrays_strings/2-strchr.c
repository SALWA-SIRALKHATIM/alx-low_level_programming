/*
 * File: 2-strchr.c
 * Auth: Salwa
 */

#include "main.h"

/**
 * _strchr - finds the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 * @s: string to be checked
 * @c: character to be looked for
 *
 * Return: pointer to c or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
