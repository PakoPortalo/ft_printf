/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsmasterutils1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:00:38 by pako              #+#    #+#             */
/*   Updated: 2020/09/27 17:16:05 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int				ft_unsdigit(unsigned int n, t_flags data)
{
	unsigned int			m;

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

unsigned int				ft_putuns(unsigned int n, int ret)
{
	char					c;

	if (n == 0)
		ret += write(1, "0", 1);
	else if (n)
	{
		if (n > 9)
			ret = ft_putuns((n / 10), ret);
		c = (n % 10) + '0';
		ret += write(1, &c, 1);
	}
	return (ret);
}

t_flags						ft_subunsprecition2(t_flags data)
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

t_flags						ft_unsprecition1(t_flags data)
{
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

t_flags						ft_unsprecition2(t_flags data)
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
	{
		data = ft_subunsprecition2(data);
	}
	return (data);
}
