#include "ft_printf.h"

static int	ft_printhex(char *hex, unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_printhex(hex, num / 16);
	count += write(1, &hex[num % 16], 1);
	return (count);
}

int	print_x(va_list ap)
{
	char	*hex;
	int	num;

	hex = "0123456789abcdef";
	num = va_arg(ap, unsigned int);
	return (ft_printhex(hex, num));		
}

int	print_X(va_list ap)
{
	char	*hex;
	int	num;

	hex = "0123456789ABCDEF";
	num = va_arg(ap, unsigned int);
	return (ft_printhex(hex, num));
}
