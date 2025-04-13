/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:02:49 by cstirber          #+#    #+#             */
/*   Updated: 2025/04/13 16:24:26 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	check_ext(char *path)
{
	size_t	len;
	int		fd;

	len = ft_strlen(path);
	if (open(path, OPEN_DIRECTORY) >= 0)
	{
		fd = open(path, OPEN_DIRECTORY);
		close(fd);
		return(1, ft_printf("\nCannot open map directory\n"));
	}
	else
	{
		fd = open(path, O_RDONLY);;
		close(fd);
		if((path[len - 4] != '.') && (path[len - 3] != 'b')
						&& path[len - 2] != 'e' && (path[len -1] != 'r')
						|| fd < 0)
			return(1, ft_printf("\nWrong format of the map.\n-- .ber -- is required."));
		else
			return(0);
	}
}