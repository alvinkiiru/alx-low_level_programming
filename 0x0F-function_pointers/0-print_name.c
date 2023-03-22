#include "function_pointers.h"
#include <stdio.h>
/**
 *@print_name: uses pointer to print name to function
 *@f: pointer
 *@name: name
 * Return: Always 0 (success)
 *
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

