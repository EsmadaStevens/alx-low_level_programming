#include "main.h"
/**
 * print_alphabet - prints alphabet in lowecase
 *
 */
void print_alphabet(void)
{
	char cha;

	cha = 'a';

	while (cha <= 'z')
	{
		_putchar(cha);
		cha++;
	}
	_putchar('\n');
}
