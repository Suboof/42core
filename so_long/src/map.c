/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:10:13 by cstirber          #+#    #+#             */
/*   Updated: 2025/04/12 17:49:16 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
 
// static int 	line_length (int fd)
// {
// 	char	buffer[1];
// 	int		length;
// 	int		bytes;

// 	buffer[0] = '\0';
// 	bytes = 1;
// 	length = 0;
// 	while (bytes == 1)
// 	{
// 		bytes = read(fd, buffer, 1);
// 		if (buffer[0] != '\n')
// 			length++;
// 		else
// 			break;
// 	}
// 	return (length);
// }

// void	window_size (t_game *data, char **argv)
// {
// 	int	fd;

// 	fd = open(argv[1], O_RDONLY);
// 	if (fd <0)
// 	{
// 		perror ("Error: Invalid map path\n");
// 		exit(EXIT_FAILURE);
// 	}
// 	if (ft_strnstr(argv[1], ".ber", ft_strlen(argv[1])) == NULL)
// 	{
// 		ft_printf("Error: map has to include .ber\n");
// 		exit(EXIT_FAILURE);
// 	}
// 	data->map_width = ()
// }
