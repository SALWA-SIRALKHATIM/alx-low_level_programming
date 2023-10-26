/*
 * File: 100-is_palindrome.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

int find_strlen(char *s);
int check_palindrome(char *s, int r_index, int l_index);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	if (s[0] != '\0')
		return (1 + find_strlen(s + 1));
	return (0);
}
/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @r_index: right index.
 * @l_index: left index.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *s, int r_index, int l_index)
{
	if (s[r_index] == s[l_index])
		if (r_index > l_index / 2)
			return(1);
		else 
			return (check_palindrome(s, r_index + 1, l_index - 1));
	else
		return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	return(check_palindrome(s,0,find_strlen(s) - 1));
}
