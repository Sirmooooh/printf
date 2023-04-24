#include "main.h"
/**
 * print_x - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string.
 */
int print_x(va_list args)
{
	char *s = va_arg(args, char*);
	int a, b = 0;

	if (!s)
		s = "(null)";
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(s[a]);
	return (b);
}
