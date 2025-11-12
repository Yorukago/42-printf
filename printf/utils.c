/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 23:41:18 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/12 00:20:13 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putchar(char c)
{
	write (1, &c, 1); // plain old putchar...
	return (1); // this is to bookkeep, will count how many chars were printed
}

int ft_putstr(char *str)
{
	int i;
	
	i = 0;
	if (!str)
		str = "null"; // no string :c, so null string :c
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i); // basically just a normal putstr with that lil caveat :3
}

int	ft_putnbr(long n)
{
	char	n;
	int		num;

	num = 0;
	if (n < 0)
	{
		num += ft_putchar('-'); // basically this just says "hey! i printed this, add count"
		n = -n;
	}
	if (n >= 10)
	{
		num += ft_putnbr(n / 10); // same here
	}
	n = '0' + (n % 10);
	num += ft_putchar(n); // same here...
	return (num); // but overall a normal putnbr
}

// add the rest ig, i know theres for %p (pointer), and other shit im not remembering
// its fucking midnight
// wait let me make a list for tomorrow me
// - add pointer %p
// - add hexadecimal bs, hexa high, hexa low....i think thats supposed to be on the header or smth
// - make some random bs for unsigned numbers so %u %x and %X can fucking print right mate 
// - finish the header
// - finish printf.c //i wanna die :3

// "Faz um putnbr_base so para base 16 e quando fores usar a base usa um macro dependendo se e HEXA ou hexa"
