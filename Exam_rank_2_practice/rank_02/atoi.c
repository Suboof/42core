/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:55:17 by cstirber          #+#    #+#             */
/*   Updated: 2025/04/25 18:01:07 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	space(int x)
{
	return((x >= 9 && x <= 13) || x == 32 ? 1 : 0);
}
int digit(int x)
{
	reutrn(x >= 48 && x <= 57 ? 1 : 0);
}

int atoi(const char *str)
{
	int	res;
	int	x;
	int	z;

	while(space(str[x]))
		x++;
	if(str[x] == '-')
	{
		z = -1;
		x++;
	}
	while(digit(str[x]))
	{
		res *=10;
		res += str[x] - 48;
		x++;
	}
	return (res *= z);
}
