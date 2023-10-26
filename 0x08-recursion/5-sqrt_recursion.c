/*
 * File: 5-sqrt_recursion.c
 * Auth: Salwa
 */

#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int find_sqrt(int num, int root)
{
	if (root * root == num)
		return (root);
	else if (root * root < num)
		return (find_sqrt(unm, root + 1));
	else 
		return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_sqrt(n, 0));
}
