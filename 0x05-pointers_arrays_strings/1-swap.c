#include "main.h"
#include <stdio.h>

/**
 * swap_int - check code
 *
 * @a: an integer
 * @b: an integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;

}
