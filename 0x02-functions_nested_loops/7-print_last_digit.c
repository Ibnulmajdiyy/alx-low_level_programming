#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: 'the program's description'
 *@n: in the question
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
		_putchar(digit);
		_putchar('\n');
		return (0);
}
