
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - fxn that  searches for an integer
 * @array: array.
 * @size: size of the array.
 * @cmp: pointer to the function
 *
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array && cmp)
	{

		if (size <= 0)
		{
			return (-1);
		}

		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]))
			{
				return (n);
			}
		}
	}
	return (-1);
}
