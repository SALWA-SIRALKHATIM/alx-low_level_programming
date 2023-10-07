#include <stdio.h>
/**
 * main - Entry point
 * Return:Always 1 (Success)
 */
int main(void)
{
/* declare a variable */
	char alphabet;

	/* using for loop */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		/* print the letters */
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

