#include <stdio.h>


/**
 * main - Prints the size of various types based on 
 * the computer it is compiled and run on..
 * Return: Always 0. 
 */

int main(void)

{
	printf("Size based on char: %zu byte(s)\n", sizeof(char));

	printf("Size based on an int: %zu byte(s)\n", sizeof(int));
	printf("Size based on a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size based on a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size based on a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
