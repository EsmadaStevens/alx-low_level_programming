#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 * Return: Always 0
 */
void _puts(char *str)
{
	char *j;

	int k;

	j = str;

	for (k = 0; j[k]; k++)
	{
		_putchar (j[k]);
	}
	_putchar('\n');
}

