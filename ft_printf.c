/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 17:37:43 by pako              #+#    #+#             */
/*   Updated: 2020/09/21 18:45:43 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list ap;
	t_flags data;

	va_start(ap, format);
	data = ft_resetflags();
	while(format[data.i] != '\0')
	{
		if (format[data.i] != '%')
			data.ret += write(1, &format[data.i], 1);
		else
		{
			data.i++;
			while (ft_strchr("%-0.*123456789", format[data.i]))
			{
				data = ft_flags(data, format, ap);
				data.i++;
			}
			data = ft_varChannel(format, ap, data);
		}
		data.i++;
	}
	return(data.ret);
}

