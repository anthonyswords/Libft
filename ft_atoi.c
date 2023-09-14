/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespadas <aespadas@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:36:15 by aespadas          #+#    #+#             */
/*   Updated: 2023/09/13 20:39:18 by aespadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\r' || *str == '\f') && *str)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if (result < 0 && sign == -1)
			return (0);
		if (result < 0 && sign == 1)
			return (-1);
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <assert.h>

int main() {
    // Casos de prueba positivos
    assert(ft_atoi("12345") == 12345);
    assert(ft_atoi("+54321") == 54321);
    assert(ft_atoi("-9876") == -9876);
    assert(ft_atoi("  42") == 42);
    assert(ft_atoi("\t-123") == -123);
    assert(ft_atoi("  \n 789") == 789);
    assert(ft_atoi("0") == 0);

    // Casos de prueba negativos (cadenas no numéricas)
    assert(ft_atoi("abc") == 0);
    assert(ft_atoi("123abc") == 123);
    assert(ft_atoi("abc123") == 0);

    // Casos de prueba con desbordamiento de enteros
    assert(ft_atoi("2147483647") == 2147483647); // INT_MAX
    assert(ft_atoi("-2147483648") == -2147483648); // INT_MIN

    // Casos de prueba con espacios en blanco antes y después del número
    assert(ft_atoi("  123  ") == 123);
    assert(ft_atoi(" \t\n\r\f\v-567  ") == -567);

    // Caso de prueba con cadena vacía
    assert(ft_atoi("") == 0);

    printf("Each tests run succesfully.\n");

    return 0;
}*/