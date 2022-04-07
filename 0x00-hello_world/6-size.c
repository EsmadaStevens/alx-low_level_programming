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

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long int: %zu bytes\n", sizeof(llongintType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
}
