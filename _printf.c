#include "main.h"
#include <stdio.h>

/**
 * for_norm - just to norm
 * @s: string to deal with it
 * @c: char to know what to do
 *
 * Return: Len
 */

int	for_norm(char *s, char c)
{
	int	len;

	if (c == 's')
		len = s_handle(s);
	else if (c == 'r')
		len = r_handle(s);
	else if (c == 'R')
		len = rot_13(s);
	return (len);
}

/**
 * _printf - printf stuff
 * @format: string
 *
 * Return: len of what writed
 */

int	_printf(const char *format, ...)
{
	int	i;
	va_list	p;
	int	len;

	i = 0;
	va_start(p, format);
	len = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			else if (format[i] == 'c')
				len += c_handle(va_arg(p, int));
			else if (format[i] == '%')
				len += write(1, "%", 1);
			else if (format[i] == 'd' || format[i] == 'i')
				len += d_handle(va_arg(p, int));
			else if (format[i] == 'b')
				len += b_handle(va_arg(p, unsigned int));
			else if	(format[i] == 'R' || format[i] == 's' || format[i] == 'r')
				len += for_norm(va_arg(p, char *), format[i]);
			else
			{
				len += write(1, "%", 1);
				len += write(1, &format[i], 1);
			}
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(p);
	return (len);
}
