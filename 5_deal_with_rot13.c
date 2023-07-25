#include "main.h"

/**
 * rot_13 - handle %R
 * @s: string to apply it with ro13
 *
 * Return: len of s
 */

int	rot_13(char *s)
{
	int	len;
	int	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	len = 0;
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'm')
			|| (s[i] >= 'A' && s[i] <= 'M'))
			len += c_handle(s[i] + 13);
		else if ((s[i] >= 'n' && s[i] <= 'z')
			|| (s[i] >= 'N' && s[i] <= 'Z'))
			len += c_handle(s[i] - 13);
		else
			len += c_handle(s[i]);
		i++;
	}
	return (len);
}
