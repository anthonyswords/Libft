/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:33:03 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/13 14:38:34 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int main() {
    // Pruebas con caracteres numéricos (0-9)
    for (int i = '0'; i <= '9'; i++) {
        assert(ft_isdigit(i) == isdigit(i));
    }

    // Pruebas con caracteres no numéricos
    assert(ft_isdigit('A') == isdigit('A'));
    assert(ft_isdigit('Z') == isdigit('Z'));
    assert(ft_isdigit('a') == isdigit('a'));
    assert(ft_isdigit('z') == isdigit('z'));
    assert(ft_isdigit('$') == isdigit('$'));
    assert(ft_isdigit('@') == isdigit('@'));
    assert(ft_isdigit(' ') == isdigit(' '));

    printf("Todas las pruebas pasaron con éxito.\n");

    return 0;
}*/