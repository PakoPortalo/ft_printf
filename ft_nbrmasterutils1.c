/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrmasterutils1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:11:24 by pako              #+#    #+#             */
/*   Updated: 2020/09/27 12:32:29 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_nbrdigit(int n, t_flags data)
{
	int m;

	data.digit = 0;
	m = n;
	if (m == 0)
		return (1);
	else
	{
		while (m != 0)
		{
			m = m / 10;
			data.digit++;
		}
	}
	return (data.digit);
}

int		ft_putnbr(int n, int ret)
{
	char		c;

	if (n == 0)
		ret += write(1, "0", 1);
	else if (n)
	{
		if (n < 0)
		{
			ret += write(1, "-", 1);
			if (n == -2147483648)
			{
				ret += write(1, "2", 1);
				n *= -1;
				n = n % 1000000000;
			}
			n *= -1;
		}
		if (n > 9)
			ret = ft_putnbr((n / 10), ret);
		c = (n % 10) + '0';
		ret += write(1, &c, 1);
	}
	return (ret);
}

t_flags		ft_subnbrprecition2(t_flags data)
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

t_flags		ft_nbrprecition1(t_flags data)
{
	data = ft_isnegative(data);
	if (data.precition > data.digit)
	{
		while ((data.precition - data.digit) != 0)
		{
			data.ret += write(1, "0", 1);
			data.precition--;
		}
	}
	return (data);
}

t_flags		ft_nbrprecition2(t_flags data)
{
	if (data.minus == 0)
	{
		while ((data.width - data.precition) != 0)
		{
			data.ret += write(1, " ", 1);
			data.width--;
		}
		data = ft_isnegative(data);
		while ((data.precition - data.digit) != 0)
		{
			data.ret += write(1, "0", 1);
			data.precition--;
		}
	}
	else if (data.minus == 1)
	{
		data = ft_isnegative(data);
		data = ft_subnbrprecition2(data);
	}
	return(data);
}
