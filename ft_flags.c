/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:19:00 by pako              #+#    #+#             */
/*   Updated: 2020/09/23 17:21:25 by pako             ###   ########.fr       */
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
	data.digit = 0;
	data.precition = 0;
	data.nbr = 0;
	data.isPrecition = 0;
	data.zero = 0;
	data.i = 0;
	data.ret = 0;
	return(data);
}

t_flags	ft_flags(t_flags data, const char *format, va_list ap)
{
	char strWidth[100];
	char strPrecition[100];
	int i;
	int j;
	i = 0;
	j = 0;

	//if (ft_strchr("%", format[data.i]))
	//	data.percentage++;
	if (ft_strchr("%", format[data.i - 1]) && (ft_strchr("0", format[data.i])))
		data.zero = 1;
	else if(format[data.i] == '.')
		data.isPrecition = 1;
	else if (format[data.i] == '-')
		data.minus = 1;
	else if (data.isPrecition == 0)		//Width
	{
		if (ft_strchr("0123456789", format[data.i]))
		{
			while (ft_strchr("0123456789", format[data.i]))
			{
				strWidth[i] = format[data.i];
				i++;
				data.i++;
			}
			data.width = ft_atoi(strWidth);
			data.i--;
		}
		else if (format[data.i] == '*')
			data.width = va_arg(ap, int);
	}
	else if (data.isPrecition == 1) // si precition == 1
	{
		if(ft_strchr("0123456789", format[data.i]))
		{
			while (ft_strchr("0123456789", format[data.i]))
			{
				strPrecition[j] = format[data.i];
				j++;
				data.i++;
			}
			data.precition = ft_atoi(strPrecition);
			data.i--;
		}
		else if (format[data.i] == '*')
			data.precition = va_arg(ap, int);
	}
	return(data);
}


