/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharMaster.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:39:43 by pako              #+#    #+#             */
/*   Updated: 2020/08/31 11:17:55 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putchar(char c)
{
	int ret;

	ret = 0;
	ret += write(1, &c, 1);
	return(ret);
}

int		ft_putcharMaster(char c)
{
	int ret;

	ret = 0;
	ret = ft_putchar(c);
	return(ret);
}
