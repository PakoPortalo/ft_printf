/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_masterUtils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:11:24 by pako              #+#    #+#             */
/*   Updated: 2020/09/21 19:08:24 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags		ft_isNegative(t_flags data) // int n mejor que data.nbr
{
	if (data.nbr < 0)
	{
		data.ret += write(1, "-", 1);
		data.nbr = -data.nbr;
		if ((data.width >= data.precition) && (data.minus == 1))
			data.width++;
	}
	return(data);
}
