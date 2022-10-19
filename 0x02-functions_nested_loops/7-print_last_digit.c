#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * Return: number of last digit
 */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);


		_putchar('0' + r);
		return (r);
}
