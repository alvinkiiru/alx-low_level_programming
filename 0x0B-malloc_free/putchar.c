#include "main.h"
		
#include <unistd.h>
		
/**
		
 * _putchar: character to stdout		
 * c: The character to print		
 * Return: 1 (success)		
 * On error: Return -1 is returned and set errno
 *
 */
		
int _putchar(char c)
		
{
		
	return (write(1, &c, 1));
		
}

