/**
 * File: 1-alphabet.c
 * Auth: Salwa
 */
#include "main.h"

/**
 * prints the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z', ch++)
		_putchar(ch);

	-putchar('\n');
}
