 #include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char cha;

	for (cha = 'z'; cha >= 'a'; cha--)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
