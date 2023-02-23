#include "main.h"
#include <unistd.h>

/**
 * _putchar - character c to stdout
 * @c: Is the character to print
 *
 * Return: 1 (success).
 * On error, -1 is returned, and errno is set.
 */

int _putchar(char c)

{
 return (write(1, &c, 1));
}

