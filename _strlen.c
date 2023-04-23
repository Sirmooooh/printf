#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *s)
{
	int m;

	for (m = 0; s[m] != 0; m++)
		;
	return (m);
}

/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int _strlenc(const char *s)
{
	int m;

	for (m = 0; s[m] != 0; m++)
		;
	return (m);
}
