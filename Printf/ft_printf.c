/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:49:14 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/29 15:17:59 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char letter)

{
	write(1, &letter, 1);
	return (1);
}

int	ft_putstr(char *s)

{
	int	c;

	c = 0;
	if (s == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (s[c] != '\0')
	{
		write(1, &s[c], 1);
		c++;
	}
	return (c);
}

int	ft_check(char after_percent, va_list arguments)

{
	if (after_percent == 'c')
		return (ft_putchar(va_arg(arguments, int)));
	else if (after_percent == 's')
		return (ft_putstr(va_arg(arguments, char *)));
	else if (after_percent == 'i' || after_percent == 'd')
		return (ft_putnbr(va_arg(arguments, int)));
	else if (after_percent == 'u')
		return (ft_unsignednbr(va_arg(arguments, unsigned int)));
	else if (after_percent == 'p')
		return (ft_print_pointeraddr(va_arg(arguments, unsigned long)));
	else if (after_percent == 'x')
		return (ft_print_small_x(va_arg(arguments, unsigned int)));
	else if (after_percent == 'X')
		return (ft_print_capital_x(va_arg(arguments, unsigned int)));
	else if (after_percent == '%')
		return (ft_putchar('%'));
	else
		return (write(1, &after_percent, 1));
	return (0);
}

int	ft_printf(const char *string, ...)
{
	int		index;
	int		characters_printed;
	va_list	arguments;

	index = 0;
	characters_printed = 0;
	va_start(arguments, string);
	while (string[index] != '\0')
	{
		if (string[index] == '%')
		{
			index++;
			characters_printed += ft_check(string[index], arguments);
		}
		else
		{
			write(1, &string[index], 1);
			characters_printed++;
		}
		index++;
	}
	return (characters_printed);
}
