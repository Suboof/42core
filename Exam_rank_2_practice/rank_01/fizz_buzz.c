/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:16:16 by cstirber          #+#    #+#             */
/*   Updated: 2025/04/25 17:06:15 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void convert (int x)
{
	if(x > 9)
		convert (x/10);
	write(1, &"0123456789"[x % 10], 1);
}

int	main(void)
{
	int	x;

	x = 1;
	while(x <= 100)
	{
		if (((x % 3) == 0) && (x % 5) == 0)
			write(1, "fizzbuzz", 8);
		else if ((x % 3) == 0)
			write(1, "buzz", 4);
		else if((x % 5) == 0)
			write(1, "fizz", 4);
		else
			convert(x);
		x++;
		write(1, "\n", 1);
	}
}