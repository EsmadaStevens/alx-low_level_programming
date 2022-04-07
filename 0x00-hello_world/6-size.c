#include <stdio.h>

/**
 * main - prints size of various types on the computer
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int llongintType;
	float floatType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(llongintType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
