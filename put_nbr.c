#include "main.h"

/**
 * put_char - print char
 * @c:  char to print it
 *
 * Return: nothing
 */

void	put_char(char c)
{
	write(1, &c, 1);
}

/**
 * put_nbr - print number
 * @d: number to print it
 *
 * Return: nothing
 */

void	put_nbr(int d)
{
	if (d >= 0 && d <= 9)
		put_char(d + 48);
	else if (d == -2147483648)
		write(1, "-2147483648", 11);
	else if (d < 0)
	{
		put_char('-');
		put_nbr(d * -1);
	}
	else
	{
		put_nbr(d / 10);
		put_nbr(d % 10);
	}
}

/**
 * put_unbr - print unsigned int
 * @u: number o print it
 *
 * Return: nothing
 */

void    put_unbr(unsigned int u)
{
	if (u <= 9)
		put_char(u + 48);
	else
	{
		put_nbr(u / 10);
		put_nbr(u % 10);
	}
}
