/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:22:32 by cstirber          #+#    #+#             */
/*   Updated: 2025/05/02 17:27:28 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

typedef struct s_point
{
    int x;
    int y;
}	t_point;

void flood_fill(char **tab, t_point size, t_point begin);

#endif