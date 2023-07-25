#include "main.h"

/**
 * put_hexa - Take care of %x and %X
 * @d: an unsigned in to convert it to hexa
 * @c: character that contain x or X
 *
 * Return: Nothing
 */

void	put_hexa(unsigned int d, char c)
{
	if (d <= 9)
		put_char(d + 48);
	else if (d >= 10 && d <= 16)
	{
		if (c == 'x')
			put_char('a' + (d - 10));
		else
			put_char('A' + (d - 10));
	}
	else
	{
		put_hexa(d / 16, c);
		put_hexa(d % 16, c);
	}
}

/**
 * xX_handle - print the hexa
 * @d: unsigned int
 * @c: charachter
 *
 * Return: Len
 */

int	xX_handle(unsigned int d, char c)
{
	int	len;

	put_hexa(d, c);
	len = 0;
	if (len == 0)
		len++;
	while (d != 0)
	{
		len++;
		d /= 16;
	}
	return (len);
}
