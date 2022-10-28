#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps the value of two integers
*
* @a: first integer to be swapped
* @b: second integer to be swapped
*
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
