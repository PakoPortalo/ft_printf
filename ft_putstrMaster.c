/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrMaster.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:42:59 by pako              #+#    #+#             */
/*   Updated: 2020/08/31 11:19:35 by pako             ###   ########.fr       */
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

int		ft_putstrMaster(char *s)
{
	int ret;

	ret = 0;
	ft_putstr(s);
	return(ret);
}
