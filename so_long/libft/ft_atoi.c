/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:52:27 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 22:25:07 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *n, int *i)
{
	int	check;
	int	sign;

	check = 1;
	sign = 0;
	while (n[*i] == 32 || (n[*i] >= 9 && n[*i] <= 13))
		(*i)++;
	while (n[*i] == '+' || n[*i] == '-')
	{
		if (n[*i] == '-')
			check = -1;
		sign++;
		(*i)++;
	}
	if (sign > 1)
		return (0);
	return (check);
}

int	ft_atoi(const char *nbr)
{
	int	x;
	int	z;
	int	check;

	x = 0;
	z = 0;
	check = ft_check(nbr, &z);
	if (check == 0)
		return (0);
	while (nbr[z] && (nbr[z] >= '0' && nbr[z] <= '9'))
	{
		x = x * 10;
		x = x + (nbr[z] - 48);
		z++;
	}
	return (x * check);
}
// int	main(void)
// {
// 	char *a;
// 	char *b;
// 	char *c;
// 	char *d;

// 	a = "-00546\n78saa458";
// 	b = "   5550085";
// 	c = "++--2147483647";
// 	d = "-2147483648";

// 	printf("%d / %d\n", ft_atoi(a), atoi(a));
// 	printf("%d / %d\n", ft_atoi(b), atoi(b));
// 	printf("%d / %d\n", ft_atoi(c), atoi(c));
// 	printf("%d / %d\n", ft_atoi(d), atoi(d));
// 	return (0);
// }