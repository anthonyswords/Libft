/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:54:26 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/13 19:06:04 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*init;

	init = b;
	while (len--)
	{
		*init = c;
		init++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main() {
    // Prueba con un solo carácter (llenar con 'A')
    char str1[10] = "123456789";
    char str2[10] = "123456789";
    char *result1 = (char *)ft_memset(str1, 'A', 5);
    char *result2 = (char *)memset(str2, 'A', 5);
    assert(memcmp(result1, result2, 10) == 0);

    // Prueba con un solo carácter (llenar con 'B')
    char str3[5] = "12345";
    char str4[5] = "12345";
	char str10[1] = "1";
    char *result3 = (char *)ft_memset(str3, 'B', 5);
    char *result4 = (char *)memset(str4, 'B', 5);
    assert(memcmp(result3, result4, 5) == 0);
	
	char *result9 = (char *)ft_memset(str10, 'A', -1);
    assert(result9 == NULL);

    // Prueba con una cadena vacía
    char str5[1] = "";
    char str6[1] = "";
    char *result5 = (char *)ft_memset(str5, 'C', 1);
    char *result6 = (char *)memset(str6, 'C', 1);
    assert(memcmp(result5, result6, 1) == 0);

    printf("Todas las pruebas pasaron con éxito.\n");

    return 0;
}*/