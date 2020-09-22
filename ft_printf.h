/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 09:48:23 by pako              #+#    #+#             */
/*   Updated: 2020/09/21 19:46:57 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h> // Para usar printf real


typedef struct s_flags
{
	char	width;
	char	precition;
	int		nbr; //cucha
	int		digit;
	int		isPrecition;
	int		minus;
	int		zero;
	int		i;
	int		ret;

} t_flags;

int			ft_printf(const char *format, ...);
t_flags		ft_flags(t_flags data, const char *format, va_list ap);
t_flags		ft_resetflags(void);
t_flags		ft_varChannel(const char *format, va_list ap, t_flags data);
//t_flags		ft_putpercMaster(char c, t_flags data);
t_flags		ft_putnbrMaster(int n, t_flags data);
t_flags		ft_putcharMaster(char c, t_flags data);
t_flags		ft_putstrMaster(char *s, t_flags data);
int			ft_atoi(const char *str);
char		*ft_strchr(const char *s, int c);
int			ft_isnumber(int n);
t_flags		ft_isNegative(t_flags data);


#endif
