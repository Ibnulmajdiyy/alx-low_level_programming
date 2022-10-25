#include "main.h"
#include <stdio.h>

/**
 * rev_string - check code
 *
 * @s: to print string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[i++])
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
