/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:04:53 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/13 15:34:47 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > '\037' && c < '\177')
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int main() {
    // Pruebas con caracteres imprimibles
    for (int i = 0x20; i <= 0x7E; i++) {
        assert(ft_isprint(i) == isprint(i));
    }

    // Pruebas con caracteres no imprimibles
    assert(ft_isprint(0x07) == isprint(0x07)); // Carácter de control (bell)
    assert(ft_isprint(0x1F) == isprint(0x1F)); // Carácter de control (escape)
    assert(ft_isprint(0x7F) == isprint(0x7F)); // Carácter de control (delete)

    // Pruebas con valores fuera del rango ASCII
    assert(ft_isprint(128) == isprint(128));
    assert(ft_isprint(255) == isprint(255));
    assert(ft_isprint(-1) == isprint(-1));
	
	//Prueba con valor ascii decimal
	assert(ft_isprint(80) == isprint(80));

    printf("Todas las pruebas pasaron con éxito.\n");

    return 0;
}*/