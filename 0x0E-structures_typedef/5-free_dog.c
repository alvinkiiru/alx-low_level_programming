#include <stdlib.h>
#include "dog.h"

/**
 * freedor: makes memory free
 * d: struct to free
 */

void free_dog(dog_t *d)
	{
		if (d)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
	}

