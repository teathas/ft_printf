#include "ft_printf.h"

int	print_c(va_list ap)
{
	char	c;

	c = (char)va_arg(ap, int);
	return (write(1, &c, 1));
}

int	print_s(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (str == NULL)
		return (write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}

int	print_mod(va_list ap)
{
	(void)ap;
	return (write(1, "%", 1));
}
