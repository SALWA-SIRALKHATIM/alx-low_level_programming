#include <stdio.h>
/**
 * main - Entry point
 * Return:Always 1 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)

		putchar(ch);

	putchar('\n');
	return (0);
}
