/**
 * File: 0-whatsmyname.c
 * Auth: Salwa.
 */

#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: int 
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
