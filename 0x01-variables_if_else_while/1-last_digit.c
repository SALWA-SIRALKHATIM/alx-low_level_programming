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
        int N = n%10;
        if (N > 5)
                printf("Last digit of %d is %d and is gretaer than 5\n", n, N);
        else if (N == 0)
                printf("Last digit of %d is %d and is 0\n", n, N);
        else
                printf("Last digit of %d is %d and is less than 6 and nor 0\n", n, N);
        return (0);
}
