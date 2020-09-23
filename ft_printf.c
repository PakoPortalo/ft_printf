/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 17:37:43 by pako              #+#    #+#             */
/*   Updated: 2020/09/23 19:29:10 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list ap;
	t_flags data;
	int ret;
	int i;

	i = 0;
	ret = 0;
	data = ft_resetflags();
	va_start(ap, format);
	while (format[data.i] != '\0')
	{

		if (format[data.i] != '%')
			data.ret += write(1, &format[data.i], 1);
		else
		{
			data.i++;
			while (ft_strchr("-0.*123456789", format[data.i]))
			{
				data = ft_flags(data, format, ap);
				data.i++;
			}
			data = ft_varChannel(format, ap, data);
		}
		data.i++;
		i = data.i;
		ret += data.ret;
		data = ft_resetflags();
		data.i = i;
	}
	return (data.ret);
}
