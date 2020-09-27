/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrmaster.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:42:59 by pako              #+#    #+#             */
/*   Updated: 2020/09/27 13:04:08 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//t_flags		ft_putstr1(char*s, t_flags data, int i)
//{
//	int ret
//
//}

int			ft_putstr(char *s, t_flags data)
{
	int		i;

	i = 0;
	if (s)
	{
		if (data.isprecition == 1)
		{
			while ((s[i] != '\0') && (data.digit != 0))
			{
				data.ret += write(1 , &s[i], 1);
				i++;
				data.digit--;
			}
		}
		else // ESTO ESTABA SIN CORCHETES TO RARO Y NO ENTIENDO COMO FUNCIONABA
		{
			while (s[i] != '\0')
			{
				data.ret += write(1 , &s[i], 1);
				i++;
				data.precition--;
			}
		}
	}
	return (data.ret);
}

t_flags		ft_strdigit(char *s, t_flags data)
{
	data.digit = 0;
	while (s[data.digit] != '\0')
		data.digit++;
	return (data);
}

t_flags		ft_strprinter(t_flags data)
{
	if (data.width > data.digit)
	{
		if (data.zero == 0)
		{
			while ((data.width - data.digit) != 0)
			{
				data.ret += write(1, " ", 1);
				data.width--;
			}
		}
		else
		{
			while ((data.width - data.digit) != 0)
			{
				data.ret += write(1, "0", 1);
				data.width--;
			}
		}
	}
	return (data);
}

t_flags		ft_putstrmaster(char *s, t_flags data)
{
	if (s == NULL)
		s = "(null)";
	data = ft_strdigit(s, data);
	if (data.isprecition == 1)
		data.digit = (data.precition < data.digit) ? data.precition : data.digit;
	if (data.minus == 0)
		data = ft_strprinter(data);
	data.ret += ft_putstr(s, data);
	if (data.minus == 1)
		data = ft_strprinter(data);
	return (data);
}
