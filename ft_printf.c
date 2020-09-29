/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 17:37:43 by pako              #+#    #+#             */
/*   Updated: 2020/09/28 12:27:53 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags		ft_printf1(const char *format, t_flags data, va_list ap)
{
	while (ft_strchr("-0.*123456789", format[data.i]))
	{
		data = ft_flags(data, format, ap);
		if (format[data.i] != '\0')
			data.i++;
		else
			break ;
	}
	if (ft_strchr("%cspdiuxX", format[data.i]))
		data = ft_varchannel(format, ap, data);
	else
	{
		if (format[data.i])
			data.ret += write(1, &format[data.i], 1);
	}
	return (data);
}

int			ft_printf(const char *format, ...)
{
	va_list	ap;
	t_flags	data;

	data = ft_resetflags();
	va_start(ap, format);
	while (format[data.i] != '\0')
	{
		if (format[data.i] != '%')
			data.ret += write(1, &format[data.i], 1);
		else
		{
			data = ft_keepresetflags(data);
			data.i++;
			data = ft_printf1(format, data, ap);
		}
		if (format[data.i] != '\0')
			data.i++;
	}
	va_end(ap);
	return (data.ret);
}
