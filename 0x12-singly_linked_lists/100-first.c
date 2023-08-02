#include <stdio.h>

void fun_print(void) __attribute__ ((constructor));

/**
 * fun_print - prints a sentence before the main function
 */

void fun_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
