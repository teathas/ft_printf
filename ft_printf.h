#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_fs{
	char	c;
	int	(*f)(va_list);
}	t_fs;

int	ft_printf(char const *s, ...);
int	print_c(va_list ap);
int	print_s(va_list ap);
int	print_di(va_list ap);
int	print_u(va_list ap);
int	print_x(va_list ap);
int	print_X(va_list ap);
int	print_mod(va_list ap);

int	ft_strlen(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_printhex(char *hex, int num);
#endif
