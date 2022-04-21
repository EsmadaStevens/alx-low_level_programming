#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: pointe
 * @src: string to be copied
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
