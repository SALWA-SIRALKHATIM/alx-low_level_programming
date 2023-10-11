#include "main.h"
/**
 * alphabet_x10 function
 * Author: Salwa SirAlkhatim
 */
void print_alphabet_x10(void);
{
	/**
	 * prints 10 times the alphabet, in lowercase, followed by new line.
	 */
	int counter = 1;
	char ch;
	while (counter <+ 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	}
}
