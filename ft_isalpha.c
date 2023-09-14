/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:31:39 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/13 19:50:58 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c > '\100' && c < '\133') || (c > '\140' && c < '\173'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int main() {
    // Pruebas con caracteres alfabéticos mayúsculos
    for (int i = 'A'; i <= 'Z'; i++) {
        assert(ft_isalpha(i) == isalpha(i));
    }

    // Pruebas con caracteres alfabéticos minúsculos
    for (int i = 'a'; i <= 'z'; i++) {
        assert(ft_isalpha(i) == isalpha(i));
    }

    // Pruebas con caracteres no alfabéticos
    assert(ft_isalpha('@') == isalpha('@'));
    assert(ft_isalpha('9') == isalpha('9'));
    assert(ft_isalpha(' ') == isalpha(' '));
    assert(ft_isalpha('\t') == isalpha('\t'));

    printf("Todas las pruebas pasaron con éxito.\n");

    return 0;
}*/