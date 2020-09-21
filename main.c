/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 10:07:27 by pako              #+#    #+#             */
/*   Updated: 2020/09/21 12:04:17 by pako             ###   ########.fr       */
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

	ft_printf("ft printf output: |%d|\n", 3);
	printf("printf output:    |%d|\n", 3);
	ft_printf("ft printf output: |%3d|\n", 3);
	printf("printf output:    |%3d|\n", 3);
	ft_printf("ft printf output: |%3.2d|\n", 3);
	printf("printf output:    |%3.2d|\n", 3);
	ft_printf("ft printf output: |%5.3d|\n", 3);
	printf("printf output:    |%5.3d|\n", 3);
	ft_printf("ft printf output: |%3.5d|\n", 3);
	printf("printf output:    |%3.5d|\n", 3);
	ft_printf("ft printf output: |%04d|\n", 3);
	printf("printf output:    |%04d|\n", 3);
	ft_printf("ft printf output: |%-4d|\n", 3);
	printf("printf output:    |%-4d|\n", 3);
	ft_printf("ft printf output: |%-4.*d|\n", 3, 4);
	printf("printf output:    |%-4.*d|\n", 3, 4);
	ft_printf("ft_printf output: |%-4.2d|\n", 3);
	printf("printf output:    |%-4.2d|\n", 3);
	printf("Counter ft_printf output: %d\n", ft_printf("Hola papaya del siberespasio "));
	printf("counter printf output: %d\n", printf("Hola papaya del siberespasio "));
	ft_printf("ft printf output: |%19d|\n", 3);
	printf("printf output:    |%19d|\n", 3);
	ft_printf("ft printf output: |%7i|\n", 33);
	printf("printf output:    |%7i|\n", 33);
	ft_printf("ft printf output: |%*.*d|\n", 2, 3, 4);
	printf("ft printf output: |%*.*d|\n", 2, 3, 4);
	ft_printf("ft printf output: |%3d|\n", 0);
	printf("printf output:    |%3d|\n", 0);
	ft_printf("ft printf output: |%-7i|\n", 33);
	printf("printf output:    |%-7i|\n", 33);
	ft_printf("ft printf output: |%7i|\n", -14);
	printf("printf output:    |%7i|\n", -14);
	ft_printf("ft printf output: |%-7i|\n", -14);
	printf("printf output:    |%-7i|\n", -14);
	ft_printf("ft printf output: |%.3i|\n", 13826);
	printf("printf output:    |%.3i|\n", 13826);
	ft_printf("ft printf output: |%.6i|\n", -3);
	printf("printf output:    |%.6i|\n", -3);
	ft_printf("ft printf output: |%10.5i|\n", -216);
	printf("printf output:    |%10.5i|\n", -216);
	ft_printf("ft printf output: |%-8.5i|\n", 34);
	printf("printf output:    |%-8.5i|\n", 34);
	ft_printf("ft printf output: |%.d|\n", 0);
	printf("printf output:    |%.d|\n", 0);
	ft_printf("ft printf output: |%5.0d|\n", 0);
	printf("printf output:    |%5.0d|\n", 0);
	ft_printf("ft printf output: |%5.d|\n", 0);
	printf("printf output:    |%5.d|\n", 0);
	ft_printf("ft printf output: |%-5.0d|\n", 0);
	printf("printf output:    |%-5.0d|\n", 0);
	ft_printf("ft printf output: |%-5.d|\n", 0);
	printf("printf output:    |%-5.d|\n", 0);
	ft_printf("ft printf output: |%.0d|\n", 0);
	printf("printf output:    |%.0d|\n", 0);
	ft_printf("ft printf output: |%i|\n", 0);
	printf("printf output:    |%i|\n", 0);
	ft_printf("ft printf output: |%3i|\n", 0);
	printf("printf output:    |%3i|\n", 0);
	ft_printf("ft printf output: |%-3i|\n", 0);
	printf("printf output:    |%-3i|\n", 0);
	ft_printf("ft printf output: |%-8.5i|\n", 34);
	printf("printf output:    |%-8.5i|\n", 34);
	ft_printf("ft printf output: |%-10.5i|\n", -216);
	printf("printf output:    |%-10.5i|\n", -216);
	ft_printf("ft printf output: |%-8.5i|\n", 0);
	printf("printf output:    |%-8.5i|\n", 0);
	ft_printf("ft printf output: |%-3.7i|\n", 3267);
	printf("printf output:    |%-3.7i|\n", 3267);

	ft_printf("ft printf output: |%-5.0d|\n", 0);
	printf("printf output:    |%-5.0d|\n", 0);
	ft_printf("ft printf output: |%-5.d|\n", 0);
	printf("printf output:    |%-5.d|\n", 0);

	return (0);
}
