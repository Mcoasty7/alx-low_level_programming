#include <stdio.h>
#include "main.h"

/**
 * print_diagnol - prints a diagnol
 * @n: parameter
 * Return:returns nothing
 */

void print_diagnol(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
	{
		for (space = 0; space < len; space++)
		{
			puthar(' ');
		}

		putchar('\\');

		if (len == (n - 1))
		{
			continue;
		}
		putchar('\n');
	}
	}
	putchar('\n');
}