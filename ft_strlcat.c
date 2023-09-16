/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:51:33 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/16 13:51:33 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	t_dest;
	size_t	t_src;

	i = 0;
	t_dest = ft_strlen(dest);
	t_src = ft_strlen(src);
	if (size - 1 <= t_dest)
		return (t_src + size);
	while (t_dest + i < size - 1)
	{
		dest[t_dest + i] = src[i];
		i++;
	}
	dest[t_dest + i] = '\0';
	return (t_dest + t_src);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char destino[20] = "Hola, ";
    const char fuente[] = "mundo!";

    size_t resultado = strlcat(destino, fuente, sizeof(destino));

    printf("Cadena concatenada: %s\n", destino);
    printf("Número de caracteres concatenados: %zu\n", resultado);

    return 0;
}
 */