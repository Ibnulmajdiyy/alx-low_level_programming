#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: 'the program's description'
 * @r: in the question
 * Return: number of last digit
 */

int print_last_digit(int r)
{
	float t;

	t = r % 10;

	if (t < 0)
	{
		t = (-1 * t);
	}

	_putchar('0' + t);
	return (t);
}
