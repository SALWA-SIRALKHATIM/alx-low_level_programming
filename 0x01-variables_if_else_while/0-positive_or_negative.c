#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return:Always 1 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0) /*if condition is true then print the following*/
		printf("%d is positive ", n);
	else if (n < 0) /*if else if condition is true print the following*/
		printf("%d is negative ", n);
	else	/*if non of the conditions is true print the following*/
		printf("%d is zero ", n);
	return (0);
}
