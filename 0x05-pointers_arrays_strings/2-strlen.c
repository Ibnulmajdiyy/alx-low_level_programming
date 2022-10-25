#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - check code
 *
 * @s: is a variable
 *
 * Return: value of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);

}
