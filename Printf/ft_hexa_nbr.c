/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:59:54 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/26 19:52:24 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointeraddr(unsigned long n)
{
	int	length;

	length = 0;
	length += ft_putstr("0x");
	length += ft_hexa_nbr(n);
	return (length);
}

int	ft_hexa_nbr(unsigned long n)
{
	int		length;
	char	*hexa_base;

	hexa_base = "0123456789abcdef";
	length = 0;
	if (n > 15)
	{
		length += ft_hexa_nbr(n / 16);
		length += ft_hexa_nbr(n % 16);
	}
	else
	{
		length += ft_putchar(hexa_base[n]);
	}
	return (length);
}
