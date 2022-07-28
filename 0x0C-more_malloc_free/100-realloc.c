#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a given memory
 * @ptr: pointer to the prev memory
 * @old_size: size of the prev memory
 * @new_size: new size to assign
 *
 * Return: the pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_add;
	unsigned int newl, i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		new_add = malloc(new_size);
		if (new_add == NULL)
		{
			free(new_add);
			return (NULL);
		}
		return (new_add);
	}
	if (new_size == old_size)
		return (ptr);

	new_add = malloc(new_size);
	if (new_add == NULL)
	{
		free(ptr);
		free(new_add);
		return (NULL);
	}

	newl = new_size > old_size ? old_size : new_size;
	for (i = 0; i < newl; i++)
		new_add[i] = ((char *) ptr)[i];

	free(ptr);
	return (new_add);
}
