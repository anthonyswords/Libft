/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:55:14 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/15 18:55:14 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*cpy_src;
	unsigned char	*cpy_dest;

	cpy_src = (unsigned char *)src;
	cpy_dest = (unsigned char *)dest;
	if (!src && !dest)
		return (0);
	while (n--)
		*cpy_dest++ = *cpy_src++;
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main() {
    // Prueba 1: Copia de una cadena de caracteres
    char source1[] = "Hola, mundo!";
    char destination1[20];
    char destination2[20];

    ft_memcpy(destination1, source1, strlen(source1) + 1);
    memcpy(destination2, source1, strlen(source1) + 1);
    
    assert(strcmp(destination1, destination2) == 0);

    // Prueba 2: Copia de un arreglo de enteros
    int source2[] = {1, 2, 3, 4, 5};
    int destination3[5];
    int destination4[5];

    ft_memcpy(destination3, source2, sizeof(source2));
    memcpy(destination4, source2, sizeof(source2));
    
    for (size_t i = 0; i < sizeof(source2) / sizeof(source2[0]); i++) {
        assert(destination3[i] == destination4[i]);
    }

    // Prueba 3: Copia de una estructura personalizada
    struct Persona {
        char nombre[20];
        int edad;
    };

    struct Persona person1 = {"Juan", 30};
    struct Persona person2;
    struct Persona person3;

    ft_memcpy(&person2, &person1, sizeof(struct Persona));
    memcpy(&person3, &person1, sizeof(struct Persona));

    assert(strcmp(person2.nombre, person3.nombre) == 0);
    assert(person2.edad == person3.edad);

    printf("Todas las pruebas han pasado con éxito.\n");

    return 0;
}*/