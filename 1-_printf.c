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
 * for_norm2 - just for norm
 * @p: unsigned int
 * @c: to know what to do
 *
 * Return: len
 */

int	for_norm2(unsigned int p, char c)
{
	int	len;

	if (c == 'u')
		len = u_handle(p);
	else if (c == 'b')
		len = b_handle(p);
	else if (c == 'p')
		len = p_handle(p);
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
			else if (format[i] == 'b' || format[i] == 'u' || format[i] == 'p')
				len += for_norm2(va_arg(p, unsigned int), format[i]);
			else if	(format[i] == 'R' || format[i] == 's' || format[i] == 'r')
				len += for_norm(va_arg(p, char *), format[i]);
			else if (format[i] == 'x' || format[i] == 'X')
				len += xX_handle(va_arg(p, unsigned int), format[i]);
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
	return (len);
}
