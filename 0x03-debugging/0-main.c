#include "main.h"

/**
 * positive_or_negative - Entry point
 *
 * Description: 'the program's description'
 * @i: as in the question
 * Return: 0, when int is 0, 1, if int is positive, -1 if int is negative
 */

void positive_or_negative(int i)
{

	if (i > 0)
	{
	_putchar(i);
	printf("is positive");

	}
	else if (i < 0)
	{
		_putchar(i);
		printf("is negative");
	}
	else
	{
		_putchar(i);
		printf("is zero");
	}
}
