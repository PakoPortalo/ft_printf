/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharMaster.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:39:43 by pako              #+#    #+#             */
/*   Updated: 2020/09/24 09:17:04 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putchar(char c)
{
	int ret;

	ret = 0;
	ret += write(1, &c, 1);
	return(ret);
}

t_flags		ft_charprinter(t_flags data)
{
	while (data.width > 1)
	{
		write(1, " ", 1);
		data.width--;
	}
	return (data);
}


t_flags		ft_putcharMaster(char c, t_flags data)
{
	if ((data.minus == 0) && (data.width > 1))
		data = ft_charprinter(data);
	data.ret += ft_putchar(c);
	if ((data.minus == 1) && (data.width > 1))
		data = ft_charprinter(data);
	return(data);
}
