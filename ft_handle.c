/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharuty <meharuty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:58:59 by meharuty          #+#    #+#             */
/*   Updated: 2026/03/01 11:49:23 by meharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle(char c, va_list args, int *sum)
{
	if (c == 'd' || c == 'i')
		ft_putnbr_id(va_arg(args, int), sum);
	if (c == 'c')
		ft_putchar_c(va_arg(args, int), sum);
	if (c == 's')
		ft_putstr_s(va_arg(args, char *), sum);
	if (c == 'p')
		ft_hex_p(va_arg(args, void *), sum);
	if (c == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), sum);
	if (c == 'x')
		ft_hex_x((unsigned int)va_arg(args, unsigned int), sum);
	if (c == 'X')
		ft_hex_xx((unsigned int)va_arg(args, unsigned int), sum);
	if (c == '%')
		ft_putchar_c('%', sum);
}
