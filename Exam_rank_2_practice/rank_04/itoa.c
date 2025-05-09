/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:03:57 by cstirber          #+#    #+#             */
/*   Updated: 2025/05/02 16:32:27 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(int nbr)
{
	int	x;
	x = 0;
	if (nbr <= 0)
		x++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int nbr)
{
	int	x;
	int	len;
	long	num;
	char *str;

	num = nbr;
	len = ft_len(nbr);
	str = (char *)malloc((sizeof(char) * (len + 1)));
	if (!str)
		return(NULL);
	x = len - 1;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 9)
	{
		str[x] = num % 10 + '0';
		num = num / 10;
		x--;
	}
	str[x] = num + '0';
	return (str);
}

// int	main (void)
// {
// 	int	x;

// 	x = -5975;
// 	printf("string: %s\n", ft_itoa(x));
// 	return (0);
// }