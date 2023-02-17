#include <stdio.h>
/**
 * main - always prints lowercase alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}
	putchar('\n');
	return (0);
}
