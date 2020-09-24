/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_variable_channel.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:18:34 by pako              #+#    #+#             */
/*   Updated: 2020/09/24 19:01:00 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags		ft_varChannel(const char *format, va_list ap, t_flags data)
{

	if(format[data.i] == '%')
		return (ft_putcharMaster('%', data));
	else if(format[data.i] == 'c')
		return(ft_putcharMaster((char)va_arg(ap, int), data)); // putchar master
	else if(format[data.i] == 's')
		return(ft_putstrMaster(va_arg(ap, char *), data));
	/*
	else if(format[i] == 'p')
		//ft_putpointer
	*/

	else if(format[data.i] == 'd' || format[data.i] == 'i')
		return (ft_putnbrMaster(va_arg(ap, int), data));
	else if(format[data.i] == 'u')
		return (ft_putunsMaster(va_arg(ap, unsigned int), data));
	else if(format[data.i] == 'x' || format[data.i] == 'X')
	{
		if (format[data.i] == 'X')
			data.upperHex = 1;
		else if (format[data.i] == 'x')
			data.upperHex = 0;
		return (ft_puthexMaster(va_arg(ap, unsigned int), data));
	}
	return(data);
}
