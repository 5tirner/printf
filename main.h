#ifndef MAIN_H
# define MAIN_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	_printf(const char *format, ...);
int	c_handle(int c);
int	s_handle(char *s);
int	d_handle(int d);
int	i_handle(int i);
void	put_nbr(int d);
void	put_char(char c);

#endif
