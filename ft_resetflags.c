/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resetflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 11:00:03 by pako              #+#    #+#             */
/*   Updated: 2020/09/27 12:15:16 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags				ft_resetflags(void)
{
	t_flags	data;

	data.width = 0;
	data.minus = 0;
	data.digit = 0;
	data.precition = 0;
	data.upperhex = 0;
	data.nbr = 0;
	data.uns = 0;
	data.isprecition = 0;
	data.zero = 0;
	data.variadic = 0;
	data.i = 0;
	data.ret = 0;
	return (data);
}

t_flags				ft_keepresetflags(t_flags data)
{
	data.width = 0;
	data.minus = 0;
	data.digit = 0;
	data.precition = 0;
	data.upperhex = 0;
	data.nbr = 0;
	data.uns = 0;
	data.isprecition = 0;
	data.zero = 0;
	data.variadic = 0;
	return (data);
}
