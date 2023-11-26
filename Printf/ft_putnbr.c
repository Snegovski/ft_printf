/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:47:06 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/26 18:59:20 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)

{
	int	length;

	length = 0;
	if (n == -2147483648)
	{
		length += ft_putstr("-2147483648");
	}
	else if (n < 0)
	{
		length += ft_putchar('-');
		n = -n;
		length += ft_putnbr(n);
	}
	else if (n > 9)
	{
		length += ft_putnbr(n / 10);
		length += ft_putnbr(n % 10);
	}
	else
	{
		length += ft_putchar(n + 48);
	}
	return (length);
}
