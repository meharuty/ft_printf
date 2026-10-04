/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharuty <meharuty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:14:44 by meharuty          #+#    #+#             */
/*   Updated: 2026/02/28 19:21:57 by meharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	int		sum;
	int		i;
	va_list	a;

	sum = 0;
	i = 0;
	va_start(a, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i + 1])
		{
			handle(fmt[i + 1], a, &sum);
			i++;
		}
		else
		{
			write(1, &fmt[i], 1);
			sum++;
		}
		i++;
	}
	va_end(a);
	return (sum);
}
