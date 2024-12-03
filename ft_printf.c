#include "ft_printf.h"

void	fill_frmts(t_fs *frmts)
{
	frmts[0].c = 'c';
	frmts[0].f = print_c;
	frmts[1].c = 's';
	frmts[1].f = print_s;
	frmts[2].c = 'd';
	frmts[2].f = print_di;
	frmts[3].c = 'i';
	frmts[3].f = print_di;
	frmts[4].c = 'u';
	frmts[4].f = print_u;
	frmts[5].c = 'x';
	frmts[5].f = print_x;
	frmts[6].c = 'X';
	frmts[6].f = print_X;
	frmts[7].c = 'p';
	frmts[7].f = print_p;
	frmts[8].c = '%';
	frmts[8].f = print_mod;
	frmts[9].c = '\0';
	frmts[9].f = NULL;
}

int	get_func(char c, va_list ap, t_fs *frmts)
{
	int	i;

	i = 0;
	while (frmts[i].c != '\0')
	{
		if (frmts[i].c == c)
			return (frmts[i].f(ap));
		i++;
	}
	return (write(1, &c, 1));
}

int	format_check(const char *s, va_list ap, t_fs *frmts)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[++i] != '\0')
			count += get_func(s[i], ap, frmts);
		else
			count += write(1, &s[i], 1);
		i++;
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int	len;
	va_list	ap;
	t_fs	frmts[10];

	va_start(ap, s);
	fill_frmts(frmts);
	len = format_check(s, ap, frmts);
	return (len);
}
