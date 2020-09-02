/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 10:07:27 by pako              #+#    #+#             */
/*   Updated: 2020/09/02 13:42:13 by pako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
		Problemas:
			* Width no es capaz de pillar números con más de un dígito
			* Cómo configuro los casos en los que tenemos width + precition??

*/





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
	//int number;

	//number = 22;
	ft_printf("%10d\n", -3);
	ft_printf("%11d\n", -3);
	ft_printf("%12d\n", -3);

	return (0);
}
