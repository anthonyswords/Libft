/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:42:14 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/13 19:51:01 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c > '\100' && c < '\133') || (c > '\140' && c < '\173')
		|| (c > 47 && c < 58))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int main() {
    // Pruebas con caracteres alfabéticos mayúsculos (A-Z)
    for (int i = 'A'; i <= 'Z'; i++) {
        assert(ft_isalnum(i) == isalnum(i));
    }

    // Pruebas con caracteres alfabéticos minúsculos (a-z)
    for (int i = 'a'; i <= 'z'; i++) {
        assert(ft_isalnum(i) == isalnum(i));
    }

    // Pruebas con dígitos numéricos (0-9)
    for (int i = '0'; i <= '9'; i++) {
        assert(ft_isalnum(i) == isalnum(i));
    }

    // Pruebas con caracteres no alfanuméricos
    assert(ft_isalnum(' ') == isalnum(' '));
    assert(ft_isalnum('$') == isalnum('$'));
    assert(ft_isalnum('@') == isalnum('@'));
    assert(ft_isalnum('#') == isalnum('#'));
    assert(ft_isalnum('_') == isalnum('_'));
    assert(ft_isalnum('\t') == isalnum('\t'));

    printf("Todas las pruebas pasaron con éxito.\n");

    return 0;
}*/