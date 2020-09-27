/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 09:48:23 by pako              #+#    #+#             */
/*   Updated: 2020/09/27 12:33:18 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h> // Para usar printf real

typedef	struct		s_flags
{
	int				width;
	int				precition;
	long int		nbr;
	unsigned int	uns;
	int				digit;
	int				isprecition;
	int				upperhex;
	int				minus;
	int				zero;
	int				i;
	int				ret;
	int				variadic;

}					t_flags;

int					ft_printf(const char *format, ...);
t_flags				ft_flags(t_flags data, const char *format, va_list ap);
t_flags				ft_resetflags(void);
t_flags				ft_keepresetflags(t_flags data);
t_flags				ft_varchannel(const char *format, va_list ap, t_flags data);
t_flags				ft_putprcmaster(t_flags data);
t_flags				ft_putnbrmaster(int n, t_flags data);
t_flags				ft_putcharmaster(char c, t_flags data);
t_flags				ft_putstrmaster(char *s, t_flags data);
int					ft_atoi(const char *str);
char				*ft_strchr(const char *s, int c);
int					ft_isnumber(int n);
int					ft_nbrdigit(int n, t_flags data);
int					ft_putnbr(int n, int ret);
t_flags				ft_isnegative(t_flags data);
t_flags				ft_nbrprecition1(t_flags data);
t_flags				ft_nbrprecition2(t_flags data);
t_flags				ft_nbrprinter1(t_flags data);
t_flags				ft_nbrprinter2(t_flags data);
t_flags				ft_putunsmaster(unsigned int n, t_flags data);
unsigned int		ft_putuns(unsigned int n, int ret);
unsigned int		ft_unsdigit(unsigned int n, t_flags data);
t_flags				ft_unsprecition1(t_flags data);
t_flags				ft_unsprecition2(t_flags data);
t_flags				ft_unsprinter1(t_flags data);
t_flags				ft_unsprinter2(t_flags data);
t_flags				ft_puthexmaster(unsigned int n, t_flags data);
int					ft_puthex(unsigned int n, t_flags data);
unsigned int		ft_hexdigit(unsigned int n, t_flags data);
t_flags				ft_hexprecition1(t_flags data);
t_flags				ft_hexprecition2(t_flags data);
t_flags				ft_hexprinter1(t_flags data);
t_flags				ft_hexprinter2(t_flags data);
t_flags				ft_putptrmaster(unsigned long n, t_flags data);
t_flags				ft_putptr(unsigned long n, t_flags data);
unsigned int		ft_ptrdigit(unsigned int n, t_flags data);
t_flags				ft_ptrprecition1(t_flags data);
t_flags				ft_ptrprecition2(t_flags data);
t_flags				ft_ptrprinter1(t_flags data);
t_flags				ft_ptrprinter2(t_flags data);

#endif
