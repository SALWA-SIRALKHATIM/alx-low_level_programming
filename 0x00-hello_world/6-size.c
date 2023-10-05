#include <stdio.h>
/**
 * main function
 * declaration: @intiger variable
 * 		@char variable
 * 		@long intiger variable
 * 		@ling long intiger variable
 * 		float vaiable
 *
 * 		ziseof function: To compute the sizes of the types
 * 		return
 */
int main()
{
	char charvar;
	int intvar;
	long int lintvar;
	long long int llintvar;
	float floatvar;

	/*Determination of the sizes of the various types on this computer*/
	printf("Size of a char: %zu  byte(s)\n", sizeof(charvar));
	printf("Size of an int: %zu byte(s)\n", sizeof(intvar));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lintvar));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llintvar));
	printf("Size of a float: %zu byes(s)\n", sizeof(floatvar));

	return(0);
}
