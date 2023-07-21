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
 * Return: Lenght of the string
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
