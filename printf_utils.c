#include "ft_printf.h"

int	ft_strlen(char *str) {
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(char *str)
{
	return (write(1, str, ft_strlen(str)));
}
