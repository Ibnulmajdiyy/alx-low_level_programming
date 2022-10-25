#include "main.h"
#include <stdio.h>

/**
 * puts2 - check code
 *
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
int i, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
