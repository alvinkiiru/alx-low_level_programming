#include <stdio.h>

/**
 * main - prints lowecase alphabet in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ab;

		for (ab = 'z'; ab >= 'a'; ab--)
			putchar(ab);

	putchar('\n');

	return (0);
}
