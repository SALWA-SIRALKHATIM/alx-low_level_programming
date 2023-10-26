/**
 * File: 0-puts_recursion.c
 * Auth: Salwa
 */
#include "main.h"

/**
 * _puts_recursion - Write function to print a string, followed by a new line.
 * @s: the string to be printed.
 * Reaturn: nothing.
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
