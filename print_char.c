#include "main.h"

/**
 * print_char - prints a character.
 * @val: arguments.
 * Return: 1.
 */
int print_char(va_list val)
{
	char d;

	d = va_arg(val, int);
	_putchar(d);
	return (1);
}
