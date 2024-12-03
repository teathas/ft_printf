#include "ft_printf.h"

int	print_di(va_list ap)
{
	int	num;

	num = va_arg(ap, int);
	return (ft_putnbr(num));	
}

int	print_u(va_list ap)
{
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	return (ft_putnbr_unsigned(num));	
}
