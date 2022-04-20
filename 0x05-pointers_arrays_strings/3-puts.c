#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 * Return: Always 0
 */
void _puts(char *str)
{
	int j, k, len;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	len = j;

	for (k = len - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	
	_putchar('\n');
}
