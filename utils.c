#include "main.h"

/**
 * c_handle - take care of %c
 * @c: charachters to write it
 *
 * Return: Always 1
 */

int	c_handle(int c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * s_handle - take care of %s
 * @s: strings to write it
 *
 * Return: Len of the string
 */

int	s_handle(char *s)
{
	int	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

/**
 * d_handle - take care of %d
 * @d: decimal number
 *
 * Return: Len of d
 */

int	d_handle(int d)
{
	int	len;

	len = 0;
	put_nbr(d);
	if (d <= 0)
		len++;
	while (d != 0)
	{
		len++;
		d /= 10;
	}
	return (len);
}

/**
 * u_handle - take care of %u
 * @u: unsigned integer
 *
 * Return: len of u
 */

int	u_handle(unsigned int u)
{
	int	len;

	len = 0;
	put_unbr(u);
	if (u == 0)
		len++;
	while (u != 0)
	{
		len++;
		u /= 10;
	}
	return (len);
}
