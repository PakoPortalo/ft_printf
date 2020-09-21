/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrMaster.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:40:44 by pako              #+#    #+#             */
/*   Updated: 2020/09/21 10:47:55 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_nbrDigit(int n, t_flags data)
{
	int m;

	data.digit = 0;
	m = n;
	if(m == 0)
		return (1);
	else
	{
		while (m != 0)
		{
			m = m / 10;
			data.digit++;
		}
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

t_flags	ft_printer(t_flags data)
{
	if ((data.width > data.digit) && (data.zero == 0))
	{
		while((data.width - data.digit) != 0)
		{
			data.ret += write(1, " ", 1);
			data.width--;
		}
	}
	else if ((data.width > data.digit) && (data.zero == 1))
	{
		if (data.nbr < 0)
		{
			data.ret += write(1, "-", 1);
			data.nbr = -data.nbr;
		}
		while((data.width - data.digit) != 0)
		{
			data.ret += write(1, "0", 1);
			data.width--;
		}
	}
	return(data);
}

t_flags ft_precition(t_flags data)
{
	if (data.width < data.precition)
	{
		if (data.nbr < 0)
		{
			data.ret += write(1, "-", 1);
			data.nbr = -data.nbr;
		}
		while ((data.precition - data.digit) != 0)
		{
			data.ret += write(1, "0", 1);
			data.precition --;
		}
	}
	else if (data.width > data.precition)
	{
		if (data.minus == 0)
		{
			while ((data.width - data.precition) != 0)
			{
				data.ret += write(1, " ",1);
				data.width--;
			}
			if (data.nbr < 0)
			{
				data.ret += write(1, "-", 1);
				data.nbr = -data.nbr;
			}
			while((data.precition - data.digit) != 0)
			{
				data.ret += write(1, "0",1);
				data.precition--;
			}
		}
		else if (data.minus == 1)
		{
			while((data.precition - data.digit) != 0)
			{
				data.ret += write(1, "0",1);
				data.precition--;
			}
		}
	}
	return(data);
}

t_flags	ft_putnbrMaster(int n, t_flags data)
{
	data.nbr = n;
	data.digit = ft_nbrDigit(n, data);
	if (data.minus == 0)
	{
		if (n < 0)
			data.width--;
		if (data.isPrecition == 1)
		{
			if (data.precition <= data.digit)
				data = ft_printer(data);
			else
				data = ft_precition(data);
		}
		else if (data.isPrecition == 0)
			data = ft_printer(data);
	}
	else
	{
		if (n < 0)
			data.width--;
		if (data.isPrecition == 1)
			data = ft_precition(data);
		else if (data.isPrecition == 0)
			data = ft_printer(data);

	}
	if ((data.precition == 0) && (data.nbr == 0)) // zero-blank cases
	{
		if (data.isPrecition == 1)
		{
			if (data.width > 0)
				data.ret += write(1, " ", 1);
		}
		else if (data.isPrecition == 0)
			data.ret += ft_putnbr(data.nbr);
	}
	else
		data.ret += ft_putnbr(data.nbr);
	if (data.minus == 1)
	{
		if (n < 0)
			data.width--;
		data = ft_printer(data);
	}
	return(data);
}
