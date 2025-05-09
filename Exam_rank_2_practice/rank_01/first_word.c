/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:41:31 by cstirber          #+#    #+#             */
/*   Updated: 2025/04/25 16:15:33 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		unsigned int	x;

		x = 0;
		while(argv[1][x] == 32 || argv[1][x] == 9)
			x++;
		while((argv[1][x] != 32 && argv[1][x] != 9) && argv[1][x])
			write(1, &argv[1][x++], 1);
	}
	write(1, "\n", 1);
	return(0);
}

