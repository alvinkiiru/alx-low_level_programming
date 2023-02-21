#include "main.h"

/**
 * checks the code to print the last digit
 *
 * return: always 0 (success)
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;
	
	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	
	return (a);
}
