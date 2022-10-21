#include "main.h"

/**
 * more_numbers - nmbr fct
 *
 * Return: no return
 */

void more_numbers(void)
{

int t, s;
	for (t = 1; t <= 10; t++)
	{
		for (s = 0; s < 15; s++)
		{
			if (s >= 10)
			_putchar('1');
			_putchar(s % 10 + '0');
		}
			_putchar('\n');
		}
}
