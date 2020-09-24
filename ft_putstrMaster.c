/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrMaster.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:42:59 by pako              #+#    #+#             */
/*   Updated: 2020/09/24 09:22:46 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr(char *s, t_flags data)
{
	int ret;
	int	i;

	ret = 0;
	i = 0;
	if (s)
	{
		if (data.isPrecition == 1)
		{
			while ((s[i] != '\0') && (data.digit != 0))
			{
				ret += write(1 , &s[i], 1);
				i++;
				data.digit--;
			}
		}
		else
			while (s[i] != '\0')
			{
				ret += write(1 , &s[i], 1);
				i++;
				data.precition--;
			}
	}
	return(ret);
}

t_flags		ft_strDigit(char *s, t_flags data)
{
	data.digit = 0;
	while (s[data.digit] != '\0')
		data.digit++;
	return(data);
}

t_flags		ft_strPrinter(t_flags data)
{
	if (data.width > data.digit)
	{
		if (data.zero == 0)
		{
			while((data.width - data.digit) != 0)
			{
				data.ret += write(1, " ", 1);
				data.width--;
			}
		}
		else	//Esto no hace falta pero me lo pide pft_2019 (???)
		{
			while((data.width - data.digit) != 0)
			{
				data.ret += write(1, "0", 1);
				data.width--;
			}
		}
	}
	return(data);
}

//t_flags		ft_strprecition(t_flags data)

t_flags		ft_putstrMaster(char *s, t_flags data)
{
	if (s == NULL)
	{
		if (data.width < 6)
			data.width = 0;
		if (data.precition < 6)
			data.precition = 0;
		s = "(null)";
	}
	data = ft_strDigit(s, data);
	if (data.isPrecition == 1)
		data.digit = (data.precition < data.digit) ? data.precition : data.digit;
	if (data.minus == 0)
		data = ft_strPrinter(data);
	data.ret += ft_putstr(s, data);
	if (data.minus == 1)
		data = ft_strPrinter(data);
	return(data);
}
