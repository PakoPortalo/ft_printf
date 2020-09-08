/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrMaster.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:40:44 by pako              #+#    #+#             */
/*   Updated: 2020/09/04 10:06:07 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_nbrDigit(int n, t_flags data)
{
	int m;

	data.digit = 0;
	m = n;
	if (m < 0)		// Esto es por el minus ???
		data.digit++;
	while (m != 0)
	{
		m = m / 10;
		data.digit++;
	}
	return(data.digit);
}


int		ft_putnbr(int n)
{
	char		c;
	int			ret;

	ret = 0;
	if (n == 0)
	{
		ret += write(1, "0", 1);
		return(ret);
	}
	if (n)
	{
		if (n < 0)
		{
			ret += write(1, "-", 1);
			if (n == -2147483648)
			{
				ret += write(1, "2", 1);
				n *= -1;
				n = n % 1000000000;
			}
			n *= -1;
		}
		if (n > 9)
		{
			ret += ft_putnbr(n / 10);
		}
		c = (n % 10) + '0';
		ret += write(1, &c, 1);
	}
	return(ret);
}

int	ft_nbrMinus(int n, int digit)
{
	int ret;

	ret = 0;
	ret += ft_putnbr(n);
	while(digit != 0)
	{
		ret += write(1, " ", 1);
		digit--;
	}
	return(ret);
}

int		ft_nbrZero(int n, int digit)
{
	int ret;

	ret = 0;
	if (n == 0)
		digit--;
	else if (n < 0)
	{
		ret += write(1, "-", 1);
		n = -n;
	}
	while(digit != 0)
	{
		ret += write(1, "0", 1);
		digit--;
	}
	ret += ft_putnbr(n);
	return(ret);
}

int		ft_putnbrMaster(int n, t_flags data)
{
	int ret;

	ret = 0;
	data.digit = ft_nbrDigit(n, data);

	if (data.width != 0)
	{
		if(data.minus == 1)
			ret += ft_nbrMinus(n, data.digit);
	}
	else if(data.zero == 1)				//If Zero == True
		ret += ft_nbrZero(n, data.digit);
	else if(data.isPrecition == 1)
		ret += ft_nbrZero(n, data.digit);
	else								//If Minus == False && Zero == False
	{
		while((data.width - data.digit) != 0)
		{
			ret += write(1, " ", 1);
			data.width--;
		}
	}
	ret += ft_putnbr(n);

//	if((data.width == 1) && (data.isPrecition == 0))
//	{
//		if ((data.minus == 0) && (data.zero == 0))
//		{
//			while((data.width - data.digit) != 0)
//			{
//				write(1, " ", 1);
//				data.width--;
//			}
//		}
//		else if((data.minus == 1) && (data.zero == 0))
//		{
//
//		}
//
//
//
//
//	}


	return(ret);
}
