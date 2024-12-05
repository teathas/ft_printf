/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:02:47 by aberkass          #+#    #+#             */
/*   Updated: 2024/12/05 13:07:59 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_fs
{
	char	c;
	int		(*f)(va_list);
}	t_fs;

int	ft_printf(char const *s, ...);
int	print_c(va_list ap);
int	print_s(va_list ap);
int	print_di(va_list ap);
int	print_u(va_list ap);
int	print_lowerhex(va_list ap);
int	print_upperhex(va_list ap);
int	print_p(va_list ap);
int	print_mod(va_list ap);

int	ft_strlen(char *str);
int	ft_putstr(char *str);
#endif
