#include "main.h"

/**
 * 2_strlen_recursion: Returns the length of a string.
 * s: The string to be measured.
 *
 * Return: Always 0 (success).
 */

int _strlen_recursion(char *s)

{

        int longit = 0;

        if (*s)

        {

                longit++;

                longit += _strlen_recursion(s + 1);

        }

        return (longit);

}
