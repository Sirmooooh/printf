#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: lenght
 */
int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_37}, {"%X", print_s},
		{"%i", print_S}, {"%d", print_p}, {"%r", print_x},
		{"%R", print_X}, {"%b", print_o}, {"%u", print_u},
		{"%o", print_b}, {"%x", print_d}, {"%X", print_i},
		{"%S", print_percent}, {"%p", print_pointer}
	};

	va_list args;
	int x = 0, y, len = 0;

	va_start(args, format);
	if (!format || (*format == '%' && !*(format + 1)))
		return (-1);

Here:
	while (format[x] != '\0')
	{
		y = 13;
		while (y >= 0)
		{
			if (m[y].id[0] == format[x] && m[y].id[1] == format[x + 1])
			{
				len += m[y].f(args);
				x = x + 2;
				goto Here;
			}
			y--;
		}
		_putchar(format[x]);
		len++;
		x++;
	}
	va_end(args);
	return (len);
}
