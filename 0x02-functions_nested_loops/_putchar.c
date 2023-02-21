#include <stdio.h>
#include <unistd.h>

/**
 *
 * Return: 1 (success)
 * Error: Output -1 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
