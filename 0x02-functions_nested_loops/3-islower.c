#include "main.h"

/**
 * checks if char is lowercase
 * return: 1 if true, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
