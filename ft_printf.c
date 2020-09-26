/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 17:37:43 by pako              #+#    #+#             */
/*   Updated: 2020/09/26 13:41:13 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list ap;
	t_flags data;

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
			while (ft_strchr("-0.*123456789", format[data.i]))
			{
				data = ft_flags(data, format, ap);
				data.i++;
			}
			data = ft_varChannel(format, ap, data);
		}
		data.i++;
	}
	return (data.ret);
}
