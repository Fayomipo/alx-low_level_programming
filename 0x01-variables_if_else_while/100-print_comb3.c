#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 25; n <= 33; n++)
	{
		for (m = 28; m <= 40; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 33 || m != 40)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

