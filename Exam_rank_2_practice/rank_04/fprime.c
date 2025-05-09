/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:41:51 by cstirber          #+#    #+#             */
/*   Updated: 2025/05/02 17:49:27 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	x;
	int	num;

	x = 2;
	if(ac == 2)
	{
		num = atoi(av[1]);
		if (num == 1)
			printf("1");
		while (x <= num)
		{
			if (num % x == 0)
			{
				printf("%d", x);
				if(num != x)
					printf("*");
				num = num / x;
			}
			else
				x++;
		}
	}
	printf("\n");
	return (0);
}