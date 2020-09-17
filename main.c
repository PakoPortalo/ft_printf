/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 10:07:27 by pako              #+#    #+#             */
/*   Updated: 2020/09/17 14:26:39 by pako             ###   ########.fr       */
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

	//ft_printf("ft printf output: |%d|\n", 3);
	//printf("printf output:    |%d|\n", 3);
	//ft_printf("ft printf output: |%3d|\n", 3);
	//printf("printf output:    |%3d|\n", 3);
	//ft_printf("ft printf output: |%3.2d|\n", 3);
	//printf("printf output:    |%3.2d|\n", 3);
	//ft_printf("ft printf output: |%5.3d|\n", 3);
	//printf("printf output:    |%5.3d|\n", 3);
	//ft_printf("ft printf output: |%3.5d|\n", 3);
	//printf("printf output:    |%3.5d|\n", 3);
	//ft_printf("ft printf output: |%04d|\n", 3);
	//printf("printf output:    |%04d|\n\n", 3);
	//ft_printf("* ft printf output: |%-4d|\n", 3);
	//printf("* printf output:    |%-4d|\n", 3);
	//ft_printf("* ft printf output: |%-4.*d|\n", 3, 4);
	//printf("* printf output:    |%-4.2d|\n\n", 3);
	//printf("Counter ft_printf output: %d\n",
	//ft_printf("Hola papaya del siberespasio "));
	//printf("counter printf output: %d\n",
	//printf("Hola papaya del siberespasio "));
	//ft_printf("ft printf output: |%19d|\n", 3);
	//printf("printf output:    |%19d|\n\n", 3);
	//ft_printf("ft printf output: |%7i\n|", 33);
	//printf("printf output:    |%7i\n|", 33);

	//ft_printf("ft printf output: |%*.*d|\n", 2, 3, 4);
	//printf("printf output:    |%*.*d|\n", 2, 3, 4);

	//ft_printf("ft printf output: |%3d|\n", 0);
	//printf("printf output:    |%3d|\n", 0);

	ft_printf("ft printf output: |%-7i|\n", 33);
	printf("printf output:    |%-7i|\n", 33);
	return (0);
}
