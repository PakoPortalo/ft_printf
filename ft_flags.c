/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:19:00 by pako              #+#    #+#             */
/*   Updated: 2020/09/02 13:43:35 by pako             ###   ########.fr       */
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
	char	str[100];

	if (ft_strchr("-.*0123456789", format[i]))
	{
		if (ft_strchr("%", format[i]))
			data.percentage += 1;
		if (ft_strchr("0", format[i]))
			data.zero = 1;
		if (ft_strchr("-", format[i]))
			data.minus = 1;
		if (ft_strchr("1234567890", format[i]))
		{
			while(ft_isnumber(format[i]))
			{
				str[data.i] = format[i];
				data.i++;
				i++;
			}
			data.width = ft_atoi(str);
		}
		if (ft_strchr(".", format[i]))
			data.isPrecition = 1;
	//	if ((ft_strchr(".", format[i - 1])) && (ft_strchr("123456789", format[i]))) // Mientras sea número, igual que en width
	//		data.precition = ft_atoi(&format[i]);

	}
	return(data);
}


