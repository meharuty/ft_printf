/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharuty <meharuty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:51:27 by meharuty          #+#    #+#             */
/*   Updated: 2026/03/01 11:49:51 by meharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>

void	handle(char c, va_list a, int *sum);
void	ft_hex_x(unsigned long n, int *sum);
void	ft_putchar_c(int c, int *sum);
void	ft_putnbr_u(unsigned int n, int *sum);
void	ft_putnbr_id(int n, int *sum);
void	ft_hex_p(void *n, int *sum);
void	ft_hex_xx(unsigned long n, int *sum);
int		ft_printf(const char *fmt, ...);
void	ft_putstr_s(char *str, int *sum);

#endif
