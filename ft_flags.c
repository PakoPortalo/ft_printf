/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:19:00 by pako              #+#    #+#             */
/*   Updated: 2020/09/29 22:16:51 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					ft_isnumber(int n)
{
	if ((n >= '0') && (n <= '9'))
		return (1);
	else
		return (0);
	return (0);
}

t_flags				ft_w(t_flags d, const char *f, va_list ap, char *str)
{
	int i;

	i = 0;
	if (ft_strchr("0123456789", f[d.i]))
	{
		while (ft_strchr("0123456789", f[d.i]))
		{
			str[i] = f[d.i];
			i++;
			d.i++;
		}
		d.width = ft_atoi(str);
		d.i--;
	}
	else if (f[d.i] == '*')
	{
		d.variadic = va_arg(ap, int);
		if (d.variadic < 0)
		{
			d.variadic = -d.variadic;
			d.minus = 1;
		}
		d.width = d.variadic;
	}
	return (d);
}

t_flags				ft_p(t_flags d, const char *f, va_list ap, char *str)
{
	int i;

	i = 0;
	if (ft_strchr("0123456789", f[d.i]))
	{
		while (ft_strchr("0123456789", f[d.i]))
		{
			str[i] = f[d.i];
			i++;
			d.i++;
		}
		d.precition = ft_atoi(str);
		d.i--;
	}
	else if (f[d.i] == '*')
	{
		d.variadic = va_arg(ap, int);
		if (d.variadic >= 0)
			d.precition = d.variadic;
		else
			d.isprecition = 0;
	}
	return (d);
}

t_flags				ft_flags(t_flags data, const char *format, va_list ap)
{
	char	strwidth[12];
	char	strprecition[12];

	if (ft_strchr("%", format[data.i - 1]) && (ft_strchr("0", format[data.i])))
		data.zero = 1;
	else if (format[data.i] == '.')
		data.isprecition = 1;
	else if (format[data.i] == '-')
		data.minus = 1;
	else if (data.isprecition == 0)
		data = ft_w(data, format, ap, strwidth);
	else if (data.isprecition == 1)
		data = ft_p(data, format, ap, strprecition);
	return (data);
}
