/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrMaster.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:40:44 by pako              #+#    #+#             */
/*   Updated: 2020/09/22 18:58:40 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_nbrprinter(t_flags data)
{
	if ((data.minus == 1) && (data.nbr < 0))
		data.width++;
	if ((data.width > data.digit) && (data.zero == 0))
		data = ft_nbrprinter1(data);
	else if ((data.width > data.digit) && (data.zero == 1))
		data = ft_nbrprinter2(data);
	return (data);
}

t_flags	ft_nbrprecition(t_flags data)
{
	if (data.width < data.precition)
		data = ft_nbrprecition1(data);
	else if (data.width >= data.precition)
		data = ft_nbrprecition2(data);
	return (data);
}

t_flags	ft_putnbrMaster1(t_flags data)
{
	if (data.isPrecition == 1)
		data = (data.precition <= data.digit) ? ft_nbrprinter(data) : ft_nbrprecition(data);
	else
		data = ft_nbrprinter(data);
	return (data);
}

t_flags	ft_putnbrMaster2(t_flags data)
{
	{
		if ((data.isPrecition == 1) && (data.width > 0))
			data.ret += write(1, " ", 1);
		else if (data.isPrecition == 0)
			data.ret = ft_putnbr(data.nbr, data.ret);
	}
	return (data);
}

t_flags	ft_putnbrMaster(int n, t_flags data)
{
	data.nbr = n;
	data.digit = ft_nbrDigit(n, data);
	if (n < 0)
		data.width--;
	if (data.minus == 0)
		data = ft_putnbrMaster1(data);
	else
			data = ft_nbrprecition(data);
	if ((data.precition == 0) && (data.nbr == 0))
		data = ft_putnbrMaster2(data);
	else
		data.ret = ft_putnbr(data.nbr, data.ret);
	if (data.minus == 1)
	{
		if (n < 0)
			data.width--;
		data = ft_nbrprinter(data);
	}
	return (data);
}
