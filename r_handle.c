#include "main.h"

/**
 * r_handle - take care of %r
 * @s: string to rev it
 *
 * Return: Len of the string
 */

int	r_handle(char *s)
{
	int	len;
	int	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		len += write(1, &s[i], 1);
		i--;
	}
	return (len);
}
