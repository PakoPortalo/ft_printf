/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsmaster.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:58:17 by pako              #+#    #+#             */
/*   Updated: 2020/09/27 13:11:31 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_unsprinter(t_flags data)
{
	if ((data.minus == 1) && (data.nbr < 0))
		data.width++;
	if ((data.width > data.digit) && (data.zero == 0))
		data = ft_unsprinter1(data);
	else if ((data.width > data.digit) && (data.zero == 1))
		data = ft_unsprinter2(data);
	return (data);
}

t_flags	ft_unsprecition(t_flags data)
{
	if (data.width < data.precition)
		data = ft_unsprecition1(data);
	else if (data.width >= data.precition)
		data = ft_unsprecition2(data);
	return (data);
}

t_flags	ft_putunsmaster1(t_flags data)
{
	if (data.isprecition == 1)
		data = (data.precition <= data.digit) ? \
		ft_unsprinter(data) : ft_unsprecition(data);
	else
		data = ft_unsprinter(data);
	return (data);
}

t_flags	ft_putunsmaster2(t_flags data)
{
	{
		if ((data.isprecition == 1) && (data.width > 0))
			data.ret += write(1, " ", 1);
		else if (data.isprecition == 0)
			data.ret = ft_putuns(data.nbr, data.ret);
	}
	return (data);
}

t_flags	ft_putunsmaster(unsigned int n, t_flags data)
{
	data.uns = n;
	data.digit = ft_unsdigit(n, data);
	if (data.minus == 0)
		data = ft_putunsmaster1(data);
	else
		data = ft_unsprecition(data);
	if ((data.precition == 0) && (data.uns == 0))
		data = ft_putunsmaster2(data);
	else
		data.ret = ft_putuns(data.uns, data.ret);
	if (data.minus == 1)
	{
		data = ft_unsprinter(data);
	}
	return (data);
}
