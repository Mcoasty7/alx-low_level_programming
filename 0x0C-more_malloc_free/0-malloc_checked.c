#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocacates memory using malloc.
 * @b: size of memory to be allocate.
 *
 * Return: pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
