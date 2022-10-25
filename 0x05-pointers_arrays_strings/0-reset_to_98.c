#include "main.h"
#include <stdio.h>

/**
 * main - to reset n to 98
 *
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int *n;

	i = 402;
	n = &i;

	_putchar(i);

	*n = 98;

	_putchar(i);

	return (0);



}
