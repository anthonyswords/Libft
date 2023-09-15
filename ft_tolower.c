/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:19:18 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/13 17:28:37 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int main() {
    // Pruebas con caracteres mayúsculos (A-Z)
    for (int i = 'A'; i <= 'Z'; i++) {
        assert(ft_tolower(i) == tolower(i));
    }

    // Pruebas con caracteres minúsculos (a-z)
    for (int i = 'a'; i <= 'z'; i++) {
        assert(ft_tolower(i) == tolower(i));
    }

    // Pruebas con caracteres no alfabéticos
    assert(ft_tolower('0') == tolower('0'));
    assert(ft_tolower('9') == tolower('9'));
    assert(ft_tolower(' ') == tolower(' '));
    assert(ft_tolower('\t') == tolower('\t'));
    assert(ft_tolower('@') == tolower('@'));
    assert(ft_tolower('!') == tolower('!'));

    printf("Todas las pruebas pasaron con éxito.\n");

    return 0;
}*/