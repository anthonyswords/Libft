/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:31:20 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/16 13:31:20 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char destino[20];
    const char fuente[] = "Hola, mundo!";
    
    // Llamamos a tu función strlcpy
    size_t resultado = ft_strlcpy(destino, fuente, sizeof(destino));

    printf("Cadena concatenada: %s\n", destino);
    printf("Número de caracteres concatenados: %zu\n", resultado);

    return 0;
}
*/