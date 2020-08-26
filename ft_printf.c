/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 17:37:43 by pako              #+#    #+#             */
/*   Updated: 2020/08/26 13:02:05 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	int i;
	va_list ap;
	t_flags data;

	va_start(ap, format);
	data = ft_resetflags();
	i = 0;
	while(format[i] != '\0')
	{
		if (format[i] != '%')
			write(1, &format[i], 1);
		else
		{
			i++;
			while (!ft_strchr("cspdiuxX", format[i]))
			{
				data = ft_flags(data, format, i);
				i++;
			}
			ft_varChannel(format, i, ap, data);
		}
		i++;
	}
	return(i);
}

