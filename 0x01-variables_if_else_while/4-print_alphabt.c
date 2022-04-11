#include <stdio.h>

/**
 * main - prints the alphabet except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char cha = 'a';

	while (cha <= 'z')
	{
		if (cha != 'e' && cha != 'q')
		{
			putchar(cha);
		}
		cha++;
	}
	putchar('\n');
	return (0);
}
