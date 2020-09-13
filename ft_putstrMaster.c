/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrMaster.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:42:59 by pako              #+#    #+#             */
/*   Updated: 2020/09/12 11:10:26 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr(char *s)
{
	int ret;

	ret = 0;
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			ret += write(1 , &s[i], 1);
			i++;
		}
	}
	return(ret);
}

t_flags		ft_putstrMaster(char *s, t_flags data)
{
	data.ret += ft_putstr(s);
	return(data);
}
