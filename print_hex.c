/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:11:30 by aberkass          #+#    #+#             */
/*   Updated: 2024/12/05 13:12:07 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	print_lowerhex(va_list ap)
{
	char	*hex;
	int		num;

	hex = "0123456789abcdef";
	num = va_arg(ap, unsigned int);
	return (ft_printhex(hex, num));
}

int	print_upperhex(va_list ap)
{
	char	*hex;
	int		num;

	hex = "0123456789ABCDEF";
	num = va_arg(ap, unsigned int);
	return (ft_printhex(hex, num));
}
