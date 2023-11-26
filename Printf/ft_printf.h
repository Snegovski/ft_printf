/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:52:53 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/26 20:50:07 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_putchar(char letter);
int	ft_putstr(char *s);
int	ft_unsignednbr(unsigned int n);
int	ft_putnbr(int n);
int	ft_hexa_nbr(unsigned long n);
int	ft_print_pointeraddr(unsigned long n);
int	ft_print_small_x(unsigned int n);
int	ft_print_capital_x(unsigned int n);
int	ft_printf(const char *string, ...);

#endif