#include "main.h"

/**
 * swap_int - swaps the content /value of the two integers
 * @a: 1st integer
 * @b: 2nd integer
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}

