/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 23:41:08 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/12 00:23:05 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

# define HEX_HIGH "123456789ABCDEF"
# define HEX_LOW "123456789abcdef"

int	ft_putchar(char c);
int ft_putstr(char *str);
int	ft_putnbr(long n);

int ft_printf(const char *, ...);

#endif