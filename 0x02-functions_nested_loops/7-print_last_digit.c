#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: 'the program's description'
 *@n: in the question
 * Return: number of last digit
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (n > 0)
	{

		_putchar('0' + digit);
		return (digit);
	}
	else
	{digit = n % 10;
		_putchar('0' + digit);
	return (digit);
	}
}
