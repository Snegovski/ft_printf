/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignednbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:52:54 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/26 17:43:48 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignednbr(unsigned int n)

{
	int	length;

	length = 0;
	if (n > 9)
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
