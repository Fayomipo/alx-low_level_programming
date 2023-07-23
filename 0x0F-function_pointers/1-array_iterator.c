#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - the function
 * @array: pointer to an integer
 * @size: size
 * @action: pointer to a function
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array  == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
