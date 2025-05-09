/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:52:59 by cstirber          #+#    #+#             */
/*   Updated: 2025/05/09 16:55:18 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#inlcude <stddef.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif