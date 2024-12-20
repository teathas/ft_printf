/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cs%.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:04:52 by aberkass          #+#    #+#             */
/*   Updated: 2024/12/05 13:04:57 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}

int	print_mod(va_list ap)
{
	(void)ap;
	return (write(1, "%", 1));
}
