/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexmasterUtils1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 13:07:44 by pako              #+#    #+#             */
/*   Updated: 2020/09/24 18:38:18 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int		ft_hexDigit(unsigned int n, t_flags data)
{
	unsigned int m;

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

void		ft_puthex(unsigned int n, t_flags *data)
{
	char			c;
	unsigned int	h;

	if (n > 0)
	{
		ft_puthex(n / 16, data);
		h = n % 16;
		if (h > 9)
			if ((*data).upperHex == 1)
				c = (h - 10) + 'A';
			else
				c = (h - 10) + 'a';
		else
			c = h + '0';
	}
	(*data).ret += write(1, &c, 1);
}

t_flags		ft_subhexprecition2(t_flags data)
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

t_flags		ft_hexprecition1(t_flags data)
{
	data = ft_isNegative(data);
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

t_flags		ft_hexprecition2(t_flags data)
{
	if (data.minus == 0)
	{
		while ((data.width - data.precition) != 0)
		{
			data.ret += write(1, " ", 1);
			data.width--;
		}
		data = ft_isNegative(data);
		while ((data.precition - data.digit) != 0)
		{
			data.ret += write(1, "0", 1);
			data.precition--;
		}
	}
	else if (data.minus == 1)
	{
		data = ft_isNegative(data);
		data = ft_subhexprecition2(data);
	}
	return(data);
}

