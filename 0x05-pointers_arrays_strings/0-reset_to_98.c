#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - to reset n to 98
 *
 * @n: pointer variable
 * Return: 0
 */

void reset_to_98(int *n)
{
	int i;

	i = 402;
	n = &i;

	_putchar(i);

	*n = 98;

	_putchar(i);



}
