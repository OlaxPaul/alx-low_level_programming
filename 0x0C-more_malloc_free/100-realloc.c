#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 *
 * Return: pointer to newly allocated memory, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *tmp;

	if (new_size == old_size)
		return (ptr);
	tmp = realloc(ptr, new_size);
	if (tmp == NULL)
		return (NULL);

	return (tmp);
}
