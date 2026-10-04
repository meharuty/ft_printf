/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharuty <meharuty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 15:55:47 by meharuty          #+#    #+#             */
/*   Updated: 2026/02/28 18:23:47 by meharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_p(void *n, int *sum)
{
	if (n == NULL)
	{
		write(1, "(nil)", 5);
		(*sum) += 5;
		return ;
	}
	write(1, "0x", 2);
	(*sum) += 2;
	ft_hex_x((unsigned long) n, sum);
}
