#include <stdlib.h>
#include "main.h"

/**		
 * malloc_checked: uses malloc to allocate memory		
 * b:represents number of bytes needed to be allocated
 * Return: allocated memory pointer
 *
 */
		
void *malloc_checked(unsigned int b)
{
		
	void *ptr;
	ptr = malloc(b);		
	if (ptr == NULL)
		exit(98);			
	return (ptr);
		
}

