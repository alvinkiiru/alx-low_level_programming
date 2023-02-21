#include "main.h"

/**
 * checks if there is an alphabetic char
 * return:1 if is character, 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
