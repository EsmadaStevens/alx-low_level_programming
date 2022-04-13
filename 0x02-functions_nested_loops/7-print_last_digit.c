#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: the value to checked
 * Return: 0
 */
int print_last_digit(int r)
{
	int n;

	if (r < 0)
		r = -r;

	n = r % 10;

	if (n < 0)
		n = -n;

	putchar(n + '0');
	return (n);
}
