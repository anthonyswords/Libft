/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:26:33 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/13 15:40:26 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main() {
    // Pruebas con cadenas vacías
    assert(ft_strlen("") == strlen(""));

    // Pruebas con cadenas de longitud 1
    assert(ft_strlen("a") == strlen("a"));
    assert(ft_strlen("Z") == strlen("Z"));

    // Pruebas con cadenas de longitud mayor a 1
    assert(ft_strlen("Hello, World!") == strlen("Hello, World!"));
    assert(ft_strlen("1234567890") == strlen("1234567890"));

    // Pruebas con cadenas de longitud muy grande
    char cadenaLarga[1000000];
    memset(cadenaLarga, 'A', sizeof(cadenaLarga) - 1);
    cadenaLarga[sizeof(cadenaLarga) - 1] = '\0';
    assert(ft_strlen(cadenaLarga) == strlen(cadenaLarga));

    printf("Todas las pruebas pasaron con éxito.\n");

    return 0;
}*/