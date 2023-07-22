#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -  prints a name
 * @name: input a name
 * @f: pointer to a function
 *
 * Return: no return
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		f(name);
}
