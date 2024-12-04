#include "ft_printf.h"

static int	ft_putnbr(int n)
{
	static int	count;
	char		c;

	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

static int	ft_putnbr_unsigned(unsigned int n)
{
	int	count;
	char		c;

	count = 0;
	if (n > 9)
		count += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

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
