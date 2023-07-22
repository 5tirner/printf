#include "main.h"
#include <stdio.h>

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
			if (!format[i])
				break;
			if (format[i] == 'c')
				len += c_handle(va_arg(p, int));
			else if (format[i] == 's')
				len += s_handle(va_arg(p, char *));
			else if (format[i] == '%')
				len += write(1, "%", 1);
			else if (format[i] == 'd')
				len += d_handle(va_arg(p, int));
			else if (format[i] == 'i')
				len += i_handle(va_arg(p, int));
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
