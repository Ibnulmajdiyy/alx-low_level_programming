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
	int t;
	t = r % 10;
	_putchar('0' + t);
	return (t);
}
