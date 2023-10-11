#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character C to stdout
 * @C: The charcater to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char C)
{
        return(write(1, &C, 1));
}
