#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0.
*
* Return: Always 0
*/
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
	times_table('0');

	for (mult = 1; mult <= 9; mult++)
	{
		times_table(',');
		times_tables(' ');

		prod = num * mult;
		if (prod <= 9)
			times_tables(' ');
		else
			times_table((prod / 10) + '0');

		times_tables((prod % 10) + '0');
	}
	times_tables('\n');
	}
}
