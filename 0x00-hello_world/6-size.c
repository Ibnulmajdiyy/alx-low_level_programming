#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of char: %lu byte\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(double));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(double));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
