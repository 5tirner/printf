#include "main.h"

/**
 * b_handle - handle %b case
 * @u: unsigned in
 *
 * Return: Len of the binary of u
 */

int	b_handle(unsigned int u)
{
	unsigned int	table;
	int		len;
	int		r;

	table = 2147483648;
	len = 0;
	r = 0;
	if (u == 0)
		len++;
	while (table != 0)
	{
		if (u >= table)
		{
			len += write(1, "1", 1);
			u -= table;
			r = 1;
		}
		else
		{
			if (r == 1)
				len += write(1, "0", 1);
		}
		table /= 2;
	}
	return (len);
}
