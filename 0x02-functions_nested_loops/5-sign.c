#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: 'the program's description'
 * @n: is the char to be checked
 *
 * Return: 1 if char is lowercase, otherwise 0
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
