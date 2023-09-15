/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:09:09 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/15 17:09:09 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n){
	unsigned char *k;

	k = (unsigned char *)s;
	while (n--)
		*k++ = 0;
}
/*
void ft_bzero(void *s, size_t n) {
    ft_memset(s, 0, n);
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main() {
    // Caso 1: Comparar con un arreglo de enteros
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 5};
    size_t size = sizeof(arr1);

    // Llama a ft_bzero en arr1 y bzero en arr2
    ft_bzero(arr1, size);
    bzero(arr2, size);

	assert(arr1[0] == arr2[0]);
	assert(arr1[5] == arr2[5]);

    // Comprueba si los arreglos son iguales
    int igual = memcmp(arr1, arr2, size) == 0;

    if (igual) {
        printf("La función ft_bzero funciona correctamente.\n");
    } else {
        printf("La función ft_bzero no funciona correctamente.\n");
    }

    // Caso 2: Comparar con una cadena de caracteres
    char str1[] = "Hola, mundo!";
    char str2[] = "Hola, mundo!";
    size = sizeof(str1);

    ft_bzero(str1, size);
    bzero(str2, size);

    for (size_t i = 0; i < size; i++) {
        assert(str1[i] == str2[i]);
    }

    // Caso 3: Comparar con un puntero nulo
    char *ptr1 = NULL;
    char *ptr2 = NULL;
    size = 0;
	bzero(ptr2, size);
    ft_bzero(ptr1, size);

	// deben apuntar a la misma direccion: NULL
    assert(ptr1 == ptr2);

    printf("Todas las pruebas pasaron con éxito.\n");
}*/
