#include "main.h"

/**
 * factorial: returns the factorial of a number
 * n: the number from which the factorial returns from
 *
 * Return: always 0 (success)
 */

int factorial(int n)

{

        if (n < 0)

                return (-1);

        if (n == 0)

                return (1);

        return (n * factorial(n - 1));

}
