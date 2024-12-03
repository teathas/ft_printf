#include "ft_printf.h"

int	print_x(va_list ap)
{
	char	*hex;
	int	num;

	hex = "0123456789abcdef";
	num = va_arg(ap, int);
	return (ft_printhex(hex, num));		
}

int	print_X(va_list ap)
{
	char	*hex;
	int	num;

	hex = "0123456789ABCDEF";
	num = va_arg(ap, int);
	return (ft_printhex(hex, num));

}

int	print_p(va_list ap)
{


}
