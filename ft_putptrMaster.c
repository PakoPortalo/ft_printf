/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptrMaster.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:29:14 by pako              #+#    #+#             */
/*   Updated: 2020/09/24 19:35:50 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_ptrprinter(t_flags data)
{
	if ((data.minus == 1) && (data.nbr < 0))
		data.width++;
	if ((data.width > data.digit) && (data.zero == 0))
		data = ft_ptrprinter1(data);
	else if ((data.width > data.digit) && (data.zero == 1))
		data = ft_ptrprinter2(data);
	return (data);
}

t_flags	ft_ptrprecition(t_flags data)
{
	if (data.width < data.precition)
		data = ft_ptrprecition1(data);
	else if (data.width >= data.precition)
		data = ft_ptrprecition2(data);
	return (data);
}

t_flags	ft_putptrMaster1(t_flags data)
{
	if (data.isPrecition == 1)
		data = (data.precition <= data.digit) ? ft_ptrprinter(data) : ft_ptrprecition(data);
	else
		data = ft_ptrprinter(data);
	return (data);
}

t_flags	ft_putptrMaster2(t_flags data)
{
	{
		if ((data.isPrecition == 1) && (data.width > 0))
			data.ret += write(1, " ", 1);
		else if (data.isPrecition == 0)
			data.ret += ft_putptr(data.nbr, data);
	}
	return (data);
}

t_flags	ft_putptrMaster(unsigned int n, t_flags data)
{
	data.uns = n;
	data.digit = ft_ptrDigit(n, data);
	if (data.minus == 0)
		data = ft_putptrMaster1(data);
	else
			data = ft_ptrprecition(data);
	if ((data.precition == 0) && (data.uns == 0))
		data = ft_putptrMaster2(data);
	else
		data.ret += ft_putptr(data.uns, data);
	if (data.minus == 1)
		data = ft_ptrprinter(data);
	return (data);
}
