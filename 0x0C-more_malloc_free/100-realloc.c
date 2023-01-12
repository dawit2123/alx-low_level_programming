#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *ptr_copy, *value;
	unsigned int index_of_mem;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);

		if (memory == NULL)
			return (NULL);

		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	memory = malloc(sizeof(*ptr_copy) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	value = memory;

	for (index_of_mem = 0; index_of_mem < old_size && index_of_mem < new_size; index_of_mem++)
		value[index_of_mem] = *ptr_copy++;

	free(ptr);
	return (memory);
}
