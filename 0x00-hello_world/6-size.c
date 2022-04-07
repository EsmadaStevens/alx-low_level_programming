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

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(llongintType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
