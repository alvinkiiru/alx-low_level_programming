#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 through 9 minus 2 and 4.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
 int x;

 for (x = 8; x < 18; x++)
 {
 if (x != 10)
 {
 if (x != 12)
 {
 _putchar(x);
 }
 }
 }
 _putchar('\n');
}

