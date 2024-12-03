#include "ft_printf.h"

int	ft_strlen(char *str) {
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbr(int n)
{
	int	count;
	char		c;

	count = 0;
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

int	ft_putnbr_unsigned(unsigned int n)
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

int	ft_printhex(char *hex, int num)
{
	int	i;
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_printhex(hex, num / 16);
	count += write(1, &hex[num % 16], 1);
	return (count);
}
