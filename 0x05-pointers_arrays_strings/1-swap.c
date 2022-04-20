#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: integer to be swaped with b
 * @b: integer to be swapped with a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
