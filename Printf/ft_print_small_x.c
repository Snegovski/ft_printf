/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_small_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:56:50 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/26 20:14:06 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_small_x(unsigned int n)
{
	int		length;
	char	*hexa_base;

	hexa_base = "0123456789abcdef";
	length = 0;
	if (n > 15)
	{
		length += ft_print_small_x(n / 16);
		length += ft_print_small_x(n % 16);
	}
	else
	{
		length += ft_putchar(hexa_base[n]);
	}
	return (length);
}
