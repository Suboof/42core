/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wr_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:10:15 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/15 11:02:04 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	pbr(unsigned long long n)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 16)
		return (wr_char(symbols[n]));
	else
	{
		count = pbr(n / 16);
		return (count + pbr(n % 16));
	}
}

int	wr_ptr(void *ptr)
{
	unsigned long	add;
	int				count;

	add = (unsigned long)ptr;
	count = 0;
	if (add == 0)
		count = write(1, "(nil)", 5);
	else
	{
		count += write(1, "0x", 2);
		count += pbr(add);
	}
	return (count);
}

// int	wr_ptr(void *ptr)
// {
// 	unsigned long	add;
// 	int				count;

// 	add = (unsigned long)ptr;
// 	count = 0;
// 	count += write(1, "0x", 2);
// 	if (add == 0)
// 		count = wr_str("(nil)");
// 	else
// 		count += pbr(add);
// 	return (count);
// }

// int	wr_ptr(void *ptr)
// {
// 	unsigned long	add;
// 	int				count;

// 	add = (unsigned long)ptr;
// 	count = 0;
// 	count += write(1, "0x", 2);
// 	if (add == 0)
// 		count += write(1, "0", 1);
// 	else
// 		count += wr_nbr(add, 16);
// 	return (count);
// }
