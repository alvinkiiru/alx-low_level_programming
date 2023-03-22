#include "function_pointers.h"
/**
 * int_index: searches for an integer
 * @cmp: function to be used to compare values
 * @size: element sizes
 * @array: array
 * Return: Always 0 (success)
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}

