/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pako <pako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 10:07:27 by pako              #+#    #+#             */
/*   Updated: 2020/09/30 15:59:56 by pako             ###   ########.fr       */
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
	int a;
	int maxilofacial_bb;
	int *ptr;

	a = 1;
	ptr = &a;
	maxilofacial_bb = -2147483648;

	// TESTS INTS 'd' AND 'i'

	//			ESPECIALITOS
	//	probar con el flag -Werror desactivado

	//ft_printf("ft printf output: |%08.3i|\n", -8473);
	//printf("printf output:    |%08.3i|\n", -8473);
	//ft_printf("ft printf output: |%0-3.3i|\n", -8462);
	//printf("printf output:    |%0-3.3i|\n", -8462);
	//ft_printf("ft printf output: |%08.3d|\n", -8473);
	//printf("printf output:    |%08.3d|\n", -8473);
	//ft_printf("ft printf output: |%0-3.3d|\n", -8462);
	//printf("printf output:    |%0-3.3d|\n", -8462);
	//ft_printf("ft printf output: |%08.3i|\n", 8375);
	//printf("printf output:    |%08.3i|\n", 8375);
	//ft_printf("ft printf output: |%0-8.5i|\n", -8473);
	//printf("printf output:    |%0-8.5i|\n", -8473);
	//ft_printf("ft printf output: |%0-8.5i|\n", 34);
	//printf("printf output:    |%0-8.5i|\n", 34);
	//ft_printf("ft printf output: |%0-10.5i|\n", -256);
	//printf("printf output:    |%0-10.5i|\n", -256);


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
	//printf("printf output:    |%04d|\n", 3);
	//ft_printf("ft printf output: |%-4d|\n", 3);
	//printf("printf output:    |%-4d|\n", 3);
	//ft_printf("ft printf output: |%-4.*d|\n", 3, 4);
	//printf("printf output:    |%-4.*d|\n", 3, 4);
	//ft_printf("ft_printf output: |%-4.2d|\n", 3);
	//printf("printf output:    |%-4.2d|\n", 3);
	//printf("Counter ft_printf output: %d\n", ft_printf("perro papaya del siberespasio "));
	//printf("counter printf output: %d\n", printf("perro papaya del siberespasio "));
	//ft_printf("ft printf output: |%19d|\n", 3);
	//printf("printf output:    |%19d|\n", 3);
	//ft_printf("ft printf output: |%7i|\n", 33);
	//printf("printf output:    |%7i|\n", 33);
	//ft_printf("ft printf output: |%*.*d|\n", 2, 3, 4);
	//printf("ft printf output: |%*.*d|\n", 2, 3, 4);
	//ft_printf("ft printf output: |%3d|\n", 0);
	//printf("printf output:    |%3d|\n", 0);
	//ft_printf("ft printf output: |%-7i|\n", 33);
	//printf("printf output:    |%-7i|\n", 33);
	//ft_printf("ft printf output: |%7i|\n", -14);
	//printf("printf output:    |%7i|\n", -14);
	//ft_printf("ft printf output: |%-7i|\n", -14);
	//printf("printf output:    |%-7i|\n", -14);
	//ft_printf("ft printf output: |%.3i|\n", 13826);
	//printf("printf output:    |%.3i|\n", 13826);
	//ft_printf("ft printf output: |%.6i|\n", -3);
	//printf("printf output:    |%.6i|\n", -3);
	//ft_printf("ft printf output: |%10.5i|\n", -216);
	//printf("printf output:    |%10.5i|\n", -216);
	//ft_printf("ft printf output: |%-8.5i|\n", 34);
	//printf("printf output:    |%-8.5i|\n", 34);
	//ft_printf("ft printf output: |%.d|\n", 0);
	//printf("printf output:    |%.d|\n", 0);
	//ft_printf("ft printf output: |%5.0d|\n", 0);
	//printf("printf output:    |%5.0d|\n", 0);
	//ft_printf("ft printf output: |%5.d|\n", 0);
	//printf("printf output:    |%5.d|\n", 0);
	//ft_printf("ft printf output: |%-5.0d|\n", 0);
	//printf("printf output:    |%-5.0d|\n", 0);
	//ft_printf("ft printf output: |%-5.d|\n", 0);
	//printf("printf output:    |%-5.d|\n", 0);
	//ft_printf("ft printf output: |%.0d|\n", 0);
	//printf("printf output:    |%.0d|\n", 0);
	//ft_printf("ft printf output: |%i|\n", 0);
	//printf("printf output:    |%i|\n", 0);
	//ft_printf("ft printf output: |%3i|\n", 0);
	//printf("printf output:    |%3i|\n", 0);
	//ft_printf("ft printf output: |%-3i|\n", 0);
	//printf("printf output:    |%-3i|\n", 0);
	//ft_printf("ft printf output: |%-8.5i|\n", 34);
	//printf("printf output:    |%-8.5i|\n", 34);
	//ft_printf("ft printf output: |%-10.5i|\n", -216);
	//printf("printf output:    |%-10.5i|\n", -216);
	//ft_printf("ft printf output: |%-8.5i|\n", 0);
	//printf("printf output:    |%-8.5i|\n", 0);
	//ft_printf("ft printf output: |%-3.7i|\n", 3267);
	//printf("printf output:    |%-3.7i|\n", 3267);
	//ft_printf("ft printf output: |%-5.0d|\n", 0);
	//printf("printf output:    |%-5.0d|\n", 0);
	//ft_printf("ft printf output: |%-5.d|\n", 0);
	//printf("printf output:    |%-5.d|\n", 0);
	//ft_printf("ft printf output: |%-3.3i|\n", -8462);
	//printf("printf output:    |%-3.3i|\n", -8462);
	//ft_printf("ft printf output: |%05i|\n", 43);
	//printf("printf output:    |%05i|\n", 43);
	//ft_printf("ft printf output: |%07i|\n", -54);
	//printf("printf output:    |%07i|\n", -54);
	//ft_printf("ft printf output: |%03i|\n", 0);
	//printf("printf output:    |%03i|\n", 0);
//
	//// TESTS '%'
//
	//ft_printf("ft printf output: |%%|\n");
	//printf("printf output:    |%%|\n");
	//ft_printf("ft printf output: |%5%|\n");
	//printf("printf output:    |%5%|\n");
	//ft_printf("ft printf output: |%-5%|\n");
	//printf("printf output:    |%-5%|\n");
	//ft_printf("ft printf output: |%05%|\n");
	//printf("printf output:    |%05%|\n");
	//ft_printf("ft printf output: |%-05%|\n");
	//printf("printf output:    |%-05%|\n\n\n");
	//ft_printf("ft printf output: |%-5|\n");
	//printf("printf output:    |%-5|\n");
//
//
	//	// TESTS 's'
//
	//ft_printf("ft printf output: |%s|\n", "Calabazon");
	//printf("printf output:    |%s|\n", "Calabazon");
	//ft_printf("ft printf output: |%5s|\n", "Ole");
	//printf("printf output:    |%5s|\n", "Ole");
	//ft_printf("ft printf output: |%-5s|\n", "iou");
	//printf("printf output:    |%-5s|\n", "iou");
	//ft_printf("ft printf output: |%s|\n", "Calabazon");
	//printf("printf output:    |%s|\n", "Calabazon");
	//ft_printf("ft printf output: |%.5s|\n", "Calabazon");
	//printf("printf output:    |%.5s|\n", "Calabazon");
	//ft_printf("ft printf output: |%10.5s|\n", "Calabazon");
	//printf("printf output:    |%10.5s|\n", "Calabazon");
	//ft_printf("ft printf output: |%-10.5s|\n", "Calabazon");
	//printf("printf output:    |%-10.5s|\n", "Calabazon");
	//ft_printf("ft printf output: |%3.5s|\n", "Calabazon");
	//printf("printf output:    |%3.5s|\n\n", "Calabazon");
	//ft_printf("ft printf output: |%3.6s|\n", "Calabazon");
	//printf("printf output:    |%3.6s|\n\n", "Calabazon");
	//ft_printf("ft printf output: |%7.5s|\n", "Calabazon");
	//printf("printf output:    |%7.5s|\n\n", "Calabazon");
	//ft_printf("ft printf output: |%11.5s|\n", "Calabazon");
	//printf("printf output:    |%11.5s|\n\n", "Calabazon");
	//ft_printf("ft printf output: |%-11.5s|\n", "Calabazon");
	//printf("printf output:    |%-11.5s|\n\n", "Calabazon");
//
	//ft_printf("ft printf output: |%10.3s|\n", "perro");
	//printf("printf output:    |%10.3s|\n", "perro");	//width > digit > precition
	//ft_printf("ft printf output: |%10.7s|\n", "perro");
	//printf("printf output:    |%10.7s|\n", "perro");	//width > precition > digit
	//ft_printf("ft printf output: |%3.10s|\n", "perro");
	//printf("printf output:    |%3.10s|\n", "perro");	//precition > digit > width
	//ft_printf("ft printf output: |%7.10s|\n", "perro");
	//printf("printf output:    |%7.10s|\n", "perro");	//precition > width > digit
	//ft_printf("ft printf output: |%3.7s|\n", "calabazone");
	//printf("printf output:    |%3.7s|\n", "calabazone");	//digit > precition > width
	//ft_printf("ft printf output: |%7.3s|\n", "calabazone");
	//printf("printf output:    |%7.3s|\n", "calabazone");	//digit > width > precition
	//ft_printf("ft_printf output: |Hello, %s|\n", "Gavin");
	//printf("printf output:    |Hello, %s|\n", "Gavin");
	//ft_printf("ft_printf output: |%s|\n", "Gavin");
	//printf("printf output:    |%s|\n", "Gavin");
	//ft_printf("ft_printf output: |%32s|\n", "abc");
	//printf("printf output:    |%32s|\n", "abc");
	//ft_printf("ft_printf output: |%.5s%7s|\n", "yo", "boi");
	//printf("printf output:    |%.5s%7s|\n", "yo", "boi");
	//ft_printf("ft_printf output: |hello, %s.|\n", NULL);
	//printf("printf output:    |hello, %s.|\n", NULL);
	//ft_printf("ft_printf output: |hello, %09s.|\n", "hi low");
	//printf("printf output:    |hello, %09s.|\n", "hi low");
	////ft_printf("ft_printf output: |%.4s|\n", NULL);
	////printf("printf output:    |%.4s|\n", NULL);
	////ft_printf("ft_printf output: |%-*s|\n", -32);
	////printf("printf output:    |%-*s|\n", -32);
//
	//	// TESTS 'c'
//
	//ft_printf("ft_printf output: |%c|\n", 'd');
	//printf("printf output:    |%c|\n", 'd');
	//ft_printf("ft_printf output: |%4c|\n", 'd');
	//printf("printf output:    |%4c|\n", 'd');
	//ft_printf("ft_printf output: |%-4c|\n", 'd');
	//printf("printf output:    |%-4c|\n", 'd');
	//ft_printf("ft_printf output: |%c%2c%3c%4c%5c%6c|\n", 'd', 'd', 'd', 'd', 'd', 'd');
	//printf("printf output:    |%c%2c%3c%4c%5c%6c|\n", 'd', 'd', 'd', 'd', 'd', 'd');
//
	//	// TESTS '%'
//
	//ft_printf("ft_printf output: |%|\n"); //con -Werror no lo pasa
	//printf("printf output:    |%|\n");
	//ft_printf("ft_printf output: |%05%|\n"); // Especialito -- Este en "print" me sale mal al compilar en Linux
	//printf("printf output:    |%05%|\n");
	//ft_printf("ft_printf output: |%-5|\n"); // Especialito -- Este en "print" me sale mal al compilar en Linux
	//printf("printf output:    |%-5|\n");
//
	//	// TESTS 'u'
//
	//ft_printf("ft_printf output: |%u|\n", 4294967295u); // Especialito -- Este en "print" me sale mal al compilar en Linux
	//printf("printf output:    |%u|\n", 4294967295u);
//
	//	// TEST 'x' y 'X'
//
	//ft_printf("ft_printf output: |%x|\n", 4294967295u);
	//printf("printf output:    |%x|\n", 4294967295u);
	//ft_printf("ft_printf output: |%x|\n", 11);
	//printf("printf output:    |%x|\n", 11);
	//ft_printf("ft_printf output: |%x|\n", 101);
	//printf("printf output:    |%x|\n", 101);
	//ft_printf("ft_printf output: |%x|\n", 10);
	//printf("printf output:    |%x|\n", 10);
	//ft_printf("ft_printf output: |%x|\n", 11);
	//printf("printf output:    |%x|\n", 11);
	//ft_printf("ft_printf output: |%x|\n", 15);
	//printf("printf output:    |%x|\n", 15);
	//ft_printf("ft_printf output: |%x|\n", 16);
	//printf("printf output:    |%x|\n", 16);
	//ft_printf("ft_printf output: |%x|\n", 17);
	//printf("printf output:    |%x|\n", 17);
	//ft_printf("ft_printf output: |%X|\n", 4294967295u);
	//printf("printf output:    |%X|\n", 4294967295u);
	//ft_printf("ft_printf output: |%X|\n", 11);
	//printf("printf output:    |%X|\n", 11);
	//ft_printf("ft_printf output: |%X|\n", 101);
	//printf("printf output:    |%X|\n", 101);
	//ft_printf("ft_printf output: |%X|\n", 10);
	//printf("printf output:    |%X|\n", 10);
	//ft_printf("ft_printf output: |%X|\n", 11);
	//printf("printf output:    |%X|\n", 11);
	//ft_printf("ft_printf output: |%X|\n", 15);
	//printf("printf output:    |%X|\n", 15);
	//ft_printf("ft_printf output: |%X|\n", 16);
	//printf("printf output:    |%X|\n", 16);
	//ft_printf("ft_printf output: |%X|\n", 17);
	//printf("printf output:    |%X|\n", 17);
	//ft_printf("%X\n", 17);
	//printf("%X\n", 17);
	//ft_printf("ft_printf output: |%5x|\n", 52625);
	//printf("printf output:    |%5x|\n", 52625);
//
	//	// TEST 'p'
//
	//ft_printf("ft_printf output: |%p|\n", NULL);
	//printf("printf output:    |%p|\n", NULL);
	//ft_printf("ft_printf output: |%2p|\n", NULL);
	//printf("printf output:    |%2p|\n", NULL);
	//ft_printf("ft_printf output: |%2.p|\n", NULL);
	//printf("printf output:    |%2.p\n", NULL);
	//ft_printf("ft_printf output: |%.p|\n", NULL);
	//ft_printf("ft_printf output: |%5p|\n", NULL);
	//printf("printf output:    |%5p|\n", NULL);
	//printf("printf output:    |%.p|\n", NULL);
	//ft_printf("ft_printf output: |%5.p|\n", NULL);
	//printf("printf output:    |%5.p|\n", NULL);
//
//
	//ft_printf("ft_printf output: |%2.9p|\n", 1234);
	//printf("printf output:    |%2.9p|\n", 1234);
	//ft_printf("ft_printf output: |%p|\n", 4);
	//printf("printf output:    |%p|\n", 4);
	//ft_printf("ft_printf output: |%5p%5p%5p%5p|\n", &a, &a, &a, &a);
	//printf("printf output:    |%5p%5p%5p%5p|\n", &a, &a, &a, &a);
	//ft_printf("ft_printf output: |%2p|\n", 3);
	//printf("printf output:    |%2p|\n", 3);
	//ft_printf("ft_printf output: |%70p|\n", &a);
	//printf("printf output:    |%70p|\n", &a);
	//ft_printf("ft_printf output: |%9.2p|\n", 1234);
	//printf("printf output:    |%9.2p|\n", 1234);
	//ft_printf("ft_printf output: |%15p|\n", &a);
	//printf("printf output:    |%15p|\n", &a);
//
	//	// TEST mix ae k psa los urtimo tes eso güeno
//
	//ft_printf("ft_printf output: |%%-d 42 == %-d|\n", maxilofacial_bb);
	//printf("printf output:    |%%-d 42 == %-d|\n", maxilofacial_bb);
	//ft_printf("ft_printf output: |%*s|\n", -32, "abc");
	//printf("printf output:    |%*s|\n", -32, "abc");
	//ft_printf("ft_printf output: |%.*s|\n", -3, "hello");
	//printf("printf output:    |%.*s|\n", -3, "hello");
	//ft_printf("ft_printf output: |%.*s|\n", 0, "hello");
	//printf("printf output:    |%.*s|\n", 0, "hello");
	//ft_printf("ft_printf output: |Hello %5 World|\n");
	//printf("printf output:    |Hello %5 World|\n");
	//ft_printf("ft_printf output: |Hello %-5 World|\n");
	//printf("printf output:    |Hello %-5 World|\n");
	//ft_printf("%-5");
	//printf("%-5\n");
	//ft_printf("%5\n");
	//printf("%5\n");

	//ft_printf("ft_printf output: |%-3.4d|\n", 1);
	//printf("printf output:    |%-3.4d|\n", 1);
	//ft_printf("ft_printf output: |%-15.p|\n", NULL);
	//printf("printf output:    |%-15.p|\n", NULL);
	//ft_printf("ft_printf output: |%-15.p|\n", 0);
	//printf("printf output:    |%-15.p|\n", 0);
	//ft_printf("ft_printf output: |%-2.p|\n", 0);
	//printf("printf output:    |%-2.p|\n", 0);
	ft_printf("ft_printf output: |%10.p|\n", ptr);
	printf("printf output:    |%10.p|\n", ptr);
	ft_printf("ft_printf output: |%10.1p|\n", ptr);
	printf("printf output:    |%10.1p|\n", ptr);
	ft_printf("ft_printf output: |%10.2p|\n", ptr);
	printf("printf output:    |%10.2p|\n", ptr);
	ft_printf("ft_printf output: |%-16p|\n", ptr);
	printf("printf output:    |%-16p|\n", ptr);

	//ft_printf("ft_printf output: |%0*%|\n", -3);
	//printf("printf output:    |%0*%|\n", -3);
	//ft_printf("ft_printf output: |%0*.%|\n", -4);
	//printf("printf output:    |%0*.%|\n", -4);
	//ft_printf("ft_printf output: |%0*.%|\n", -3);
	//printf("printf output:    |%0*.%|\n", -3);
//
	//ft_printf("ft_printf output: |%0*.3%|\n", -4);
	//printf("printf output:    |%0*.3%|\n", -4);
	//ft_printf("ft_printf output: |%-16p|\n", 12);
	//printf("printf output:    |%-16p|\n", 12);

	return (0);
}


