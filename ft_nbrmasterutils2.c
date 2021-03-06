/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrmasterutils2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 11:40:46 by pako              #+#    #+#             */
/*   Updated: 2020/09/27 12:47:40 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags		ft_isnegative(t_flags data)
{
	if ((data.nbr < 0) && (data.nbr > -2147483648))
	{
		data.ret += write(1, "-", 1);
		data.nbr = -data.nbr;
		if ((data.width >= data.precition) && (data.minus == 1))
			data.width++;
	}
	return (data);
}

t_flags		ft_nbrprinter1(t_flags data)
{
	while ((data.width - data.digit) != 0)
	{
		data.ret += write(1, " ", 1);
		data.width--;
	}
	return (data);
}

t_flags		ft_subnbrprinter2_1(t_flags data)
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

t_flags		ft_subnbrprinter2_2(t_flags data)
{
	data = ft_isnegative(data);
	while ((data.width - data.digit) != 0)
	{
		data.ret += write(1, "0", 1);
		data.width--;
	}
	return (data);
}

t_flags		ft_nbrprinter2(t_flags data)
{
	if (data.minus == 0)
	{
		if (data.isprecition == 1)
			data = ft_subnbrprinter2_1(data);
		else
			data = ft_subnbrprinter2_2(data);
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
