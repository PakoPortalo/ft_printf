/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsmasterutils2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:01:02 by pako              #+#    #+#             */
/*   Updated: 2020/09/27 13:13:29 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags		ft_unsprinter1(t_flags data)
{
	while ((data.width - data.digit) != 0)
	{
		data.ret += write(1, " ", 1);
		data.width--;
	}
	return (data);
}

t_flags		ft_subunsprinter2_1(t_flags data)
{
	while ((data.width - data.digit) != 0)
	{
		if (data.zero == 1)
		{
			data.ret += write(1, " ", 1);
			data.width--;
		}
		else
		{
			if (data.nbr < 0)
			{
				data.ret += write(1, "-", 1);
				data.nbr = -data.nbr;
			}
			data.ret += write(1, "0", 1);
			data.width--;
		}
	}
	data = ft_isnegative(data);
	return (data);
}

t_flags		ft_subunsprinter2_2(t_flags data)
{
	data = ft_isnegative(data);
	while ((data.width - data.digit) != 0)
	{
		data.ret += write(1, "0", 1);
		data.width--;
	}
	return (data);
}

t_flags		ft_unsprinter2(t_flags data)
{
	if (data.minus == 0)
	{
		if (data.isprecition == 1)
			data = ft_subunsprinter2_1(data);
		else
			data = ft_subunsprinter2_2(data);
		while ((data.width - data.digit) != 0)
		{
			data.ret += write(1, "0", 1);
			data.width--;
		}
	}
	else if (data.minus == 1)
	{
		while ((data.width - data.digit) != 0)
		{
			data.ret += write(1, " ", 1);
			data.width--;
		}
	}
	return (data);
}
