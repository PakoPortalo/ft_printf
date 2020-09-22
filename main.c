/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 10:07:27 by pako              #+#    #+#             */
/*   Updated: 2020/09/22 18:53:40 by pako             ###   ########.fr       */
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


	// TESTS INTS 'd' AND 'i'

	//			ESPECIALITOS
	//	probar con el flag -Werror desactivado

	ft_printf("ft printf output: |%08.3i|\n", -8473);
	printf("printf output:    |%08.3i|\n", -8473);
	ft_printf("ft printf output: |%0-3.3i|\n", -8462);
	printf("printf output:    |%0-3.3i|\n", -8462);
	ft_printf("ft printf output: |%08.3d|\n", -8473);
	printf("printf output:    |%08.3d|\n", -8473);
	ft_printf("ft printf output: |%0-3.3d|\n", -8462);
	printf("printf output:    |%0-3.3d|\n", -8462);
	ft_printf("ft printf output: |%08.3i|\n", 8375);
	printf("printf output:    |%08.3i|\n", 8375);
	ft_printf("ft printf output: |%0-8.5i|\n", -8473);
	printf("printf output:    |%0-8.5i|\n", -8473);
	ft_printf("ft printf output: |%0-8.5i|\n", 34);
	printf("printf output:    |%0-8.5i|\n", 34);
	ft_printf("ft printf output: |%0-10.5i|\n", -256);
	printf("printf output:    |%0-10.5i|\n", -256);


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
	ft_printf("ft printf output: |%-3.3i|\n", -8462);
	printf("printf output:    |%-3.3i|\n", -8462);
	ft_printf("ft printf output: |%05i|\n", 43);
	printf("printf output:    |%05i|\n", 43);
	ft_printf("ft printf output: |%07i|\n", -54);
	printf("printf output:    |%07i|\n", -54);
	ft_printf("ft printf output: |%03i|\n", 0);
	printf("printf output:    |%03i|\n", 0);

	// TESTS '%'

	//ft_printf("ft printf output: |%%|\n");
	//printf("printf output:    |%%|\n");
	//ft_printf("ft printf output: |%5%|\n");
	//printf("printf output:    |%5%|\n");
	//ft_printf("ft printf output: |%-5%|\n");
	//printf("printf output:    |%-5%|\n");
	//ft_printf("ft printf output: |%05%|\n");
	//printf("printf output:    |%05%|\n");
	//ft_printf("ft printf output: |%-05%|\n");
	//printf("printf output:    |%-05%|\n");
	//ft_printf("ft printf output: |%-5\n");
	//printf("printf output:    |%-5|\n");


		// TESTS 's'

	//ft_printf("ft printf output: |%s|\n", "Calabazon");
	//printf("printf output:    |%s|\n", "Calabazon");
	//ft_printf("ft printf output: |%5s|\n", "Ole");
	//printf("printf output:    |%5s|\n", "Ole");
	//ft_printf("ft printf output: |%-5s|\n", "iou");
	//printf("printf output:    |%-5s|\n", "iou");
	//ft_printf("ft printf output: |%s|\n", "Calabazon");
	//printf("printf output:    |%s|\n", "Calabazon");
	//ft_printf("ft printf output: |%s|\n", "Calabazon");
	//printf("printf output:    |%s|\n", "Calabazon");


	return (0);
}
