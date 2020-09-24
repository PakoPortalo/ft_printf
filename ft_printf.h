/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 09:48:23 by pako              #+#    #+#             */
/*   Updated: 2020/09/24 18:34:31 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h> // Para usar printf real


typedef struct s_flags
{
	int				width;
	int				precition;
	int				nbr;
	unsigned int	uns;
	int				digit;
	int				isPrecition;
	int				upperHex;
	int				minus;
	int				zero;
	int				i;
	int				ret;

} t_flags;

int				ft_printf(const char *format, ...);
t_flags			ft_flags(t_flags data, const char *format, va_list ap);
t_flags			ft_resetflags(void);
t_flags			ft_keepresetflags(t_flags data);
t_flags			ft_varChannel(const char *format, va_list ap, t_flags data);
t_flags			ft_putprcMaster(t_flags data);
t_flags			ft_putnbrMaster(int n, t_flags data);
t_flags			ft_putcharMaster(char c, t_flags data);
t_flags			ft_putstrMaster(char *s, t_flags data);
int				ft_atoi(const char *str);
char			*ft_strchr(const char *s, int c);
int				ft_isnumber(int n);
int				ft_nbrDigit(int n, t_flags data);
int				ft_putnbr(int n, int ret);
t_flags			ft_isNegative(t_flags data);
t_flags			ft_nbrprecition1(t_flags data);
t_flags			ft_nbrprecition2(t_flags data);
t_flags			ft_nbrprinter1(t_flags data);
t_flags			ft_nbrprinter2(t_flags data);

t_flags			ft_putunsMaster(unsigned int n, t_flags data);
unsigned int	ft_putuns(unsigned int n, int ret);
unsigned int	ft_unsDigit(unsigned int n, t_flags data);
t_flags			ft_unsprecition1(t_flags data);
t_flags			ft_unsprecition2(t_flags data);
t_flags			ft_unsprinter1(t_flags data);
t_flags			ft_unsprinter2(t_flags data);

t_flags			ft_puthexMaster(unsigned int n, t_flags data);
void			ft_puthex(unsigned int n, t_flags *data);
unsigned int	ft_hexDigit(unsigned int n, t_flags data);
t_flags			ft_hexprecition1(t_flags data);
t_flags			ft_hexprecition2(t_flags data);
t_flags			ft_hexprinter1(t_flags data);
t_flags			ft_hexprinter2(t_flags data);

#endif
