#include "main.h"

/**
 * _strlen - returns length of strings
 * @s: string to be printed
 * Return: ALways 0
 */
nt _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
