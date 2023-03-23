#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - creates a new line after printing string.
 * @separator: Strings to print.
 * @n: No of strings passed.
 * @...: No. of strings to print.
 * Description: No not print if separator is null, print if string is null
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
		va_list strings;
		char *str;
		unsigned int index;


		va_start(strings, n);


		for (index = 0; index < n; index++)
		{
			str = va_arg(strings, char *);


			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);


		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
		}


	printf("\n");


	va_end(strings);
}
