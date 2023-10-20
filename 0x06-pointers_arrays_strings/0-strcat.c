/*
 * File: 0-strcat.c
 * Auth: Salwa
 */

#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0, scr_len = 0;

	while (scr[index++])
		scr_len++;
	while (dest[index++])
		dest_len++;

	for (index = 0; index < scr_len; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
