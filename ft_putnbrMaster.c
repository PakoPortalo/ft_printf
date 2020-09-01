/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrMaster.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:40:44 by pako              #+#    #+#             */
/*   Updated: 2020/09/01 12:24:22 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_nbrWidth(int n, t_flags data)
{
	int	digit;
	int m;
	//if n < 0 --> be careful with minus character
	//investigar ternarios ?

	digit = 0;
	m = n;
	if (m < 0)
		digit++;
	while (m != 0)
	{
		m = m / 10;
		digit++;
	}
	if (data.width > digit)
		m = data.width - digit;
	return(m);
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
	if (n < 0)
	{
		ret += write(1, "-", 1);
		n = n * -1;
		digit++;
	}
	if (n == 0)
		digit--;
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
	int digit;
	int ret;

	ret = 0;
	digit = 0;
	if(data.width != 0)
		digit = ft_nbrWidth(n, data);
	if (data.minus == 1)				//If Minus == True
		ret += ft_nbrMinus(n, digit);
	else if(data.zero == 1)				//If Zero == True
		ret += ft_nbrZero(n, digit);
	else if(data.isPrecition == 1)
		ret += ft_nbrZero(n, digit);
	else								//If Minus == False && Zero == False
	{
		while(digit != 0)
		{
			ret += write(1, " ", 1);
			digit--;
		}
		ret += ft_putnbr(n);
	}
	return(ret);
}
