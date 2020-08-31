/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:19:00 by pako              #+#    #+#             */
/*   Updated: 2020/08/27 11:44:31 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_resetflags(void)
{
	t_flags data;
	data.width = 0;
	data.minus = 0;
	data.precition = 0;
	data.isPrecition = 0;
	data.zero = 0;
	data.percentage = 1;
	return(data);
}

t_flags	ft_flags(t_flags data, const char *format, int i)
{

	if (ft_strchr("-.*0123456789", format[i]))
	{
		if (ft_strchr("%", format[i]))
			data.percentage += 1;
		if (ft_strchr("0", format[i]))
			data.zero = 1;
		if (ft_strchr("-", format[i]))
			data.minus = 1;
		if (ft_strchr("123456789", format[i]))  //No funcionan números mayores de 9!!!
			data.width = ft_atoi(&format[i]);
		if (ft_strchr(".", format[i]))
			data.isPrecition = 1;
	}
	return(data);
}


