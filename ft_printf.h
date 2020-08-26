/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 09:48:23 by pako              #+#    #+#             */
/*   Updated: 2020/08/26 13:25:34 by pako             ###   ########.fr       */
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
	int		isPrecition;
	int		minus;	// For inverse width. Boolean
	int		zero;	// For zeroes instead of blanks. Boolean

} t_flags;

int			ft_printf(const char *format, ...);
t_flags		ft_flags(t_flags data, const char *format, int i);
t_flags		ft_resetflags(void);
void		ft_varChannel(const char *format, int i, va_list ap, t_flags data);
void		ft_putnbrMaster(int n, t_flags data);
void		ft_putcharMaster(char c);
void		ft_putstrMaster(char *s);
int			ft_atoi(const char *str);
char		*ft_strchr(const char *s, int c);

#endif
