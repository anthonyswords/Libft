/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:51:32 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/13 14:58:45 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= '\000' && c <= '\177' )
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int main() {
    // Pruebas con caracteres ASCII en el rango 0-127
    for (int i = 0; i <= 127; i++) {
        assert(ft_isascii(i) == isascii(i));
    }

    // Pruebas con caracteres fuera del rango ASCII
    assert(ft_isascii(128) == isascii(128));
    assert(ft_isascii(255) == isascii(255));
    assert(ft_isascii(-1) == isascii(-1));

    printf("Todas las pruebas pasaron con éxito.\n");

    return 0;
}*/