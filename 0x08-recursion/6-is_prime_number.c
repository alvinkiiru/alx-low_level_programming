#include "main.h"

int actual_prime(int n, int i);

/**

 * 6_is_prime_number: checks if or not an integer is a prime number
 * n: number to check
 *
 * Return: 1 if n is prime, else return 0
 */

int is_prime_number(int n)

{

        if (n <= 1)

                return (0);

        return (actual_prime(n, n - 1));

}

int actual_prime(int n, int i)

{

        if (i == 1)

                return (1);

        if (n % i == 0 && i > 0)

                return (0);

        return (actual_prime(n, i - 1));

}
