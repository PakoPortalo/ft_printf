/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharMaster.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:39:43 by pako              #+#    #+#             */
/*   Updated: 2020/09/12 11:04:34 by pako             ###   ########.fr       */
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

t_flags		ft_putcharMaster(char c, t_flags data)
{
	data.ret += ft_putchar(c);
	return(data);
}
