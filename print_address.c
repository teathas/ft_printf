/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:08:53 by aberkass          #+#    #+#             */
/*   Updated: 2024/12/05 13:08:56 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_address(unsigned long long p)
{
	char	*hex;
	int		count;

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
	unsigned long long	p;

	p = (unsigned long long)va_arg(ap, void *);
	if (!p)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + print_address(p));
}
