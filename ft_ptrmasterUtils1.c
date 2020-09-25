/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrmasterUtils1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:30:31 by pako              #+#    #+#             */
/*   Updated: 2020/09/25 12:53:48 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int		ft_ptrDigit(unsigned int n, t_flags data)
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
		ft_putptr(n / 16, data);
	data.ret = write(1, &base[n %  16], 1);
	return(data);
}



//int		ft_putptr(unsigned long n, t_flags data)
//{
//
//	char				c;
//	unsigned long int	h;
//	int					ret;
//
//	ret = 0;
//	h = 0;
//	if (n == 0)
//		ret += write(1, "0", 1);
//	else if (n)
//	{
//		if (n >= 16)
//			ret += ft_putptr((n / 16), data);
//		h = n % 16;
//		if(h > 9)
//				c = (h - 10) + 'a';
//		else
//			c = h + '0';
//		ret += write(1, &c, 1);
//	}
//	return (ret);
//}

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
	data = ft_isNegative(data);
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
		data = ft_subptrprecition2(data);
	}
	return(data);
}

