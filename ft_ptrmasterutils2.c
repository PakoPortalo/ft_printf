/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrmasterutils2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:30:26 by pako              #+#    #+#             */
/*   Updated: 2020/09/30 16:09:26 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags		ft_ptrprinter1(t_flags data)
{
	//if (((data.isprecition == 0) || (data.precition == 0)) && (data.width >= 2))
	//	data.width -= 2;
	if (data.width > data.digit)
	{
		while ((data.width - data.digit) != 0)
		{
			data.ret += write(1, " ", 1);
			data.width--;
		}
	}
	return (data);
}

t_flags		ft_subptrprinter2_1(t_flags data)
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
	return (data);
}

t_flags		ft_subptrprinter2_2(t_flags data)
{
	while ((data.width - data.digit) != 0)
	{
		data.ret += write(1, "0", 1);
		data.width--;
	}
	return (data);
}

t_flags		ft_ptrprinter2(t_flags data)
{
	if (data.minus == 0)
	{
		if (data.isprecition == 1)
			data = ft_subptrprinter2_1(data);
		else
			data = ft_subptrprinter2_2(data);
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
