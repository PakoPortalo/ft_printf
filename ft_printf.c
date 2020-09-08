/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 17:37:43 by pako              #+#    #+#             */
/*   Updated: 2020/09/08 13:22:09 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	int i;
	int ret;
	va_list ap;
	t_flags data;

	va_start(ap, format);
	data = ft_resetflags();
	i = 0;
	ret = 0;
	while(format[i] != '\0')
	{
		if (format[i] != '%')
			ret += write(1, &format[i], 1);
		else
		{
			i++;
			while (ft_strchr("-0.*123456789+ #", format[i]))
			{
				data = ft_flags(data, format, i);
				i++;
			}
			ret += ft_varChannel(format, i, ap, data);
		}
		i++;
	}
	return(ret);
}

