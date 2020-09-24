/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prcMaster.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 09:56:37 by pako              #+#    #+#             */
/*   Updated: 2020/09/24 10:02:59 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags		ft_putprc(t_flags data)
{
	data.ret += write(1, "%", 1);
	return(data);
}


t_flags		ft_putprcMaster(t_flags data)
{
	data = ft_putprc(data);
	return (data);
}
