/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrmasterutils1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:30:31 by pako              #+#    #+#             */
/*   Updated: 2020/09/27 12:25:20 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int		ft_ptrdigit(unsigned int n, t_flags data)
{
	unsigned int m;

	if (data.precition >= data.width)
		data.digit = 0;
	else
		data.digit = 2;
	m = n;
	if (m == 0)
		return (1);
	else
	{
		while (m != 0)
		{
			m = m / 16;
			data.digit++;
		}
	}
	return (data.digit);
}

t_flags		ft_putptr(unsigned long int n, t_flags data)
{
    char *base;
	base = "0123456789abcdef";
    if (n >= 16)
		data = ft_putptr(n / 16, data);
	data.ret += write(1, &base[n %  16], 1);
	return(data);
}

t_flags		ft_subptrprecition2(t_flags data)
{
	if (data.precition > data.digit)
	{
		while ((data.precition - data.digit) != 0)
		{
			data.ret += write(1, "0", 1);
			data.precition--;
			data.width--;
		}
	}
	return (data);
}

t_flags		ft_ptrprecition1(t_flags data)
{
	if (data.precition > data.digit)
	{
		data.ret += write(1, "0x", 2);
		while ((data.precition - data.digit) != 0)
		{
			data.ret += write(1, "0", 1);
			data.precition--;
		}
	}
	return (data);
}

t_flags		ft_ptrprecition2(t_flags data)
{
	if (data.minus == 0)
	{
		while ((data.width - data.precition) != 0)
		{
			data.ret += write(1, " ", 1);
			data.width--;
		}
		while ((data.precition - data.digit) != 0)
		{
			data.ret += write(1, "0", 1);
			data.precition--;
		}
	}
	else if (data.minus == 1)
		data = ft_subptrprecition2(data);
	return(data);
}

