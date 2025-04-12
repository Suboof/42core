/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wr_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:07:23 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/14 15:06:40 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	wr_nbr(long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (wr_nbr(-n, base) + 1);
	}
	else if (n < base)
		return (wr_char(symbols[n]));
	else
	{
		count = wr_nbr(n / base, base);
		return (count + wr_nbr(n % base, base));
	}
}
