/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_variable_channel.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:18:34 by pako              #+#    #+#             */
/*   Updated: 2020/09/27 12:39:05 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags		ft_varchannel(const char *format, va_list ap, t_flags data)
{
	if (format[data.i] == '%')
		return (ft_putcharmaster('%', data));
	else if (format[data.i] == 'c')
		return (ft_putcharmaster((char)va_arg(ap, int), data));
	else if (format[data.i] == 's')
		return (ft_putstrmaster(va_arg(ap, char *), data));
	else if (format[data.i] == 'p')
		return (ft_putptrmaster(va_arg(ap, unsigned long), data));
	else if (format[data.i] == 'd' || format[data.i] == 'i')
		return (ft_putnbrmaster(va_arg(ap, int), data));
	else if (format[data.i] == 'u')
		return (ft_putunsmaster(va_arg(ap, unsigned int), data));
	else if (format[data.i] == 'x' || format[data.i] == 'X')
	{
		if (format[data.i] == 'X')
			data.upperhex = 1;
		else if (format[data.i] == 'x')
			data.upperhex = 0;
		return (ft_puthexmaster(va_arg(ap, unsigned int), data));
	}
	return (data);
}
