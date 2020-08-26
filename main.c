/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 10:07:27 by pako              #+#    #+#             */
/*   Updated: 2020/08/21 10:21:27 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main()
{
/*
	char *empresa;
	char *prueba;

	empresa = "Huevos fritos S.A";
	prueba = "PRRU€BV";

	ft_printf("Esto es una %0s.\nVamos a ver si podemos imprimir %s.\nOkei, me cago en la play.\n", prueba, empresa);

*/
	int number;

	number = 2;
	ft_printf("hola numbero %.4d", number); //No me funciona el salto de línea :-(

	return (0);
}
