/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexMaster.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 13:06:38 by pako              #+#    #+#             */
/*   Updated: 2020/09/24 18:42:24 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_hexprinter(t_flags data)
{
	if ((data.minus == 1) && (data.nbr < 0))
		data.width++;
	if ((data.width > data.digit) && (data.zero == 0))
		data = ft_hexprinter1(data);
	else if ((data.width > data.digit) && (data.zero == 1))
		data = ft_hexprinter2(data);
	return (data);
}

t_flags	ft_hexprecition(t_flags data)
{
	if (data.width < data.precition)
		data = ft_hexprecition1(data);
	else if (data.width >= data.precition)
		data = ft_hexprecition2(data);
	return (data);
}

t_flags	ft_puthexMaster1(t_flags data)
{
	if (data.isPrecition == 1)
		data = (data.precition <= data.digit) ? ft_hexprinter(data) : ft_hexprecition(data);
	else
		data = ft_hexprinter(data);
	return (data);
}

t_flags	ft_puthexMaster2(t_flags data)
{
	{
		if ((data.isPrecition == 1) && (data.width > 0))
			data.ret += write(1, " ", 1);
		else if (data.isPrecition == 0)
			data.ret += ft_puthex(data.nbr, data);
	}
	return (data);
}

t_flags	ft_puthexMaster(unsigned int n, t_flags data)
{
	data.uns = n;
	data.digit = ft_hexDigit(n, data);
	if (data.minus == 0)
		data = ft_puthexMaster1(data);
	else
			data = ft_hexprecition(data);
	if ((data.precition == 0) && (data.uns == 0))
		data = ft_puthexMaster2(data);
	else
		data.ret += ft_puthex(data.uns, data);
	if (data.minus == 1)
		data = ft_hexprinter(data);
	return (data);
}
