/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrMaster.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:42:59 by pako              #+#    #+#             */
/*   Updated: 2020/09/21 18:58:50 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr(char *s)
{
	int ret;

	ret = 0;
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			ret += write(1 , &s[i], 1);
			i++;
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
	if ((data.width > data.digit) != 0)
	{
		while((data.width - data.digit) != 0)
		{
			data.ret += write(1, " ", 1);
			data.width--;
		}
	}
	return(data);
}
t_flags		ft_putstrMaster(char *s, t_flags data)
{
	data = ft_strDigit(s, data);
	if (data.minus == 0)
		data = ft_strPrinter(data);
	ft_putstr(s);
	if (data.minus == 1)
		data = ft_strPrinter(data);

	return(data);
}
