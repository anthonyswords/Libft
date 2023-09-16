/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:13:20 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/16 12:13:20 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (src < dest)
	{
		src2 += (n - 1);
		dst2 += (n - 1);
		while (n--)
			*dst2-- = *src2--;
	}
	else if (src >= dest)
		ft_memcpy(dst2, src2, n);
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>


int main() {
    char str[] = "Hello, World!";
    char *src = str + 7; // Apunta a "World!"
    char *dst = str;     // Apunta a "Hello, World!"

    // Usamos memcpy para copiar 13 caracteres desde src a dst
    memcpy(dst, src, 13);

    printf("memcpy: %s\n", str);

    // Restablecemos str
    strcpy(str, "Hello, World!");

    // Usamos memmove para copiar 13 caracteres desde src a dst
    memmove(dst, src, 13);

    printf("memmove: %s\n", str);

    return 0;
}*/