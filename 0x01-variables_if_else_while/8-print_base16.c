#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int c;
    /*scanf("%c", &c);*/
	for (c = '1'; c <= '9'; ++c)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; ++c)
	{
		putchar(c);
	}
		putchar('\n');
	return (0);
}
