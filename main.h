#ifndef MAIN_H
# define MAIN_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	_printf(const char *format, ...);
int	c_handle(int c);
int	s_handle(char *s);
int	d_handle(int d);
void	put_nbr(int d);
void	put_char(char c);
int	b_handle(unsigned int u);
int	r_handle(char *s);
int	rot_13(char *s);
int	for_norm(char *s, char c);

#endif
