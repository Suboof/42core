/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:26:53 by cstirber          #+#    #+#             */
/*   Updated: 2025/04/13 21:33:55 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	check_char(t_game *pos)
{
	char	*ok_char;

	ok_char = "01PEC";
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
			else if (!ft_strchr (ok_char, (pos->map.map[pos->x][pos->y])))
			{
				ft_printf("\nMap contains invalid characters\n");
				return(0);
			}
			else if (pos->map.p > 1 || pos->map.e > 1)
			{
				if (pos->map.p > 1)
					ft_printf("\nMultiple players not allowed.\n");
				else if (pos->map.e > 1)
					ft_printf("\nMultiple exits dont exist.\n");
				return(1);
			}
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
int	check_out_edge (int	row, char **map)
{
	int	x;
	
	x = 0;
	while(map[row][x] && map[row][x] != '\n')
	{
		if (map[row][x] != '1')
			return(1);
		x++;
	}
	return(0);
}

int	check_edges (int count_lines, char **map)
{
	int	x;

	x= 0;
	if(check_out_edge(0, map) || check_out_edge(count_lines, map))
		return (1);
	while(x < count_lines)
	{
		if(map[x][0] != '1' || map[x][ft_strlen(map[0]-2)] != '1')
			return(1);
		x++;
	}
	return(0);
}
// seclude to 2 bits

int check_rectangle(t_game *line)
{
	int		x1;
	size_t	y1;

	x1 = 0;
	y1 = 0;
	line->map.len = ft_strlen(line->map.map[x1])-1;
	while(line->map.map[x1])
	{
		while(line->map.map[x1][y1] && line->map.map[x1][y1] != '\n')
			y1++;
		if (line->map.len != y1)
			return(1);
		y1 = 0;
		x1++;
	}
	return(0);
}
