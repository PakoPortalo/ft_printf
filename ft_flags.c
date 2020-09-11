/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:19:00 by pako              #+#    #+#             */
/*   Updated: 2020/09/11 13:07:41 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_isnumber(int n)
{
	if((n >= '0') && (n <= '9'))
		return(1);
	else
		return(0);
	return(0);
}

t_flags	ft_resetflags(void)
{
	t_flags data;
	data.width = 0;
	data.minus = 0;
	data.precition = 0;
	data.isPrecition = 0;
	data.zero = 0;
	data.percentage = 1;
	data.i = 0;
	return(data);
}

t_flags	ft_flags(t_flags data, const char *format, int i)
{
	if (ft_strchr("%", format[i - 1]) && (ft_strchr("0", format[i])))
		data.zero = 1;
	else if (ft_strchr("0123456789", format[i]) && (data.isPrecition == 0))
		data.width = ft_atoi(&format[i]);
	else if (ft_strchr("0123456789", format[i]) && (data.isPrecition != 0))
		data.precition = ft_atoi(&format[i]);
	else if ((format[i] == 0) && (data.minus == 0))
		data.zero = 1;
	else if (format[i] == '-')
		data.minus = 1;
	else if(format[i] == '.')
		data.isPrecition = 1;

	return(data);
}


