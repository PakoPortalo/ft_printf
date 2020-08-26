/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_variable_channel.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:18:34 by pako              #+#    #+#             */
/*   Updated: 2020/08/20 19:23:38 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_varChannel(const char *format, int i, va_list ap, t_flags data)
{
	if(format[i] == 'c')
		ft_putcharMaster((char)va_arg(ap, int)); // putchar master

	else if(format[i] == 's')
		ft_putstrMaster(va_arg(ap, char *));
	/*
	else if(format[i] == 'p')
		//ft_putpointer
	*/
	else if(format[i] == 'd' || format[i] == 'i')	// empezar por aquí
		ft_putnbrMaster(va_arg(ap, int), data);
	/*
	else if(format[i] == 'u')
		//ft_put_what
		else if(format[i] == 'x')
		//ft_put_hexadecimal lower
	else if(format[i] == 'X')
		//ft_put_hexadecimal upper
	*/
}
