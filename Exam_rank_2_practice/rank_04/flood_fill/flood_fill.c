/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:16:41 by cstirber          #+#    #+#             */
/*   Updated: 2025/05/02 17:39:47 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	fill(char **tab, t_point size, char target, int row, int col)
{
	if (row < 0 || col < 0 || row > size.y || col >= size.x)
		return;
	if (tab[row][col] == 'F' || tab[row][col] != target)
		return;
	tab[row][col] = 'F';

	fill (tab, size, target, row -1, col);
	fill (tab, size, target, row +1, col);
	fill (tab, size, target, row, col -1);
	fill (tab, size, target, row, col +1);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	char target;

	target = tab[begin.y][begin.x];
	fill(tab, size, target, begin.y, begin.x);
}