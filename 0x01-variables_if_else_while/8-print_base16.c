#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char cha;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (cha = 'a'; cha <= 'f'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
