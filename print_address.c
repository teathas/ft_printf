#include "ft_printf.h"

int	print_address(unsigned long long p)
{
	char	*hex;
	int	count;

	hex = "0123456789abcdef";
	count = 0;
	if (p < 16)
		return (write(1, &hex[p], 1));
	else
	{
		count += print_address(p / 16);
		count += write(1, &hex[p % 16], 1);
	}
	return (count);
}

int	print_p(va_list ap)
{
	unsigned long long p;

	p = (unsigned long long)va_arg(ap, void *);
	return (ft_putstr("0x") + print_address(p));
}
