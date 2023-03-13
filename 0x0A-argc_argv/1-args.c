#include <stdio.h>
#include "main.h"

/**
 * main:  prints the no of arguments passed
 * argc: no of arguments
 * argv: argument array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

