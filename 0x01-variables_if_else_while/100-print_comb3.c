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
	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
		putchar('\n');
	return (0);
}
