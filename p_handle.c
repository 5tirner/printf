#include "main.h"

/**
 * p_handle - take car oof %p
 * @p: unsigned int
 *
 * Return: Len of what i write
 */

int	p_handle(unsigned int p)
{
	int	len;

	len = write(1, "0x", 2);
	len += xX_handle(p, 'x');
	return (len);
}
