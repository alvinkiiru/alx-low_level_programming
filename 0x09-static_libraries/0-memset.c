#include "main.h"
/**
 * 0-memset: fill a block of memory with a specific value
 * s: start address
 * b: value desired
 * n: number of bytes to change
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

