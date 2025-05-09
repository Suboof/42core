/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:43:43 by cstirber          #+#    #+#             */
/*   Updated: 2025/05/09 17:55:05 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	x;
	int	z;
	int	first_word;

	x = 0;
	first_word = 0;
	if (ac == 2)
	{
		while (av[1][x] != '\0')
			x++;
		x--;
		while (x >= 0)
		{
			while (x >= 0 && (av[1][x] == ' ' || av[1][x] == '\t'))
				x--;
			z = x;
			while (z >= 0 && av[1][z] != ' ' && av[1][z] != '\t')
				z--;
			if (first_word)
				write(1, " ", 1);
			write(1, &av[1][z + 1], x - z);
			first_word = 1;
			x = z;
		}
	}
	write(1, "\n", 1);
	return (0);
}