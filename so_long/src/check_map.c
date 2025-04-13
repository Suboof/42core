/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:26:53 by cstirber          #+#    #+#             */
/*   Updated: 2025/04/13 19:18:12 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	check_char(t_game *pos)
{
	while (pos->map.map[pos->x])
	{
		while(pos->map.map[pos->x][pos->y])
		{
			if (pos->map.map[pos->x][pos->y] == 'P')
				pos->map.p++;
			else if (pos->map.map[pos->x][pos->y] =='C')
				pos->map.c++;
			else if (pos->map.map[pos->x][pos->y] == 'E')
				pos->map.e++;
			pos->y++;
		}
		pos->y = 0;
		pos->x++;
	}
	if(!pos->map.p || !pos->map.c || !pos->map.e)
		return(1);
	else
		return(0);
}