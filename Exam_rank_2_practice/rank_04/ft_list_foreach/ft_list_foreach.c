/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:52:08 by cstirber          #+#    #+#             */
/*   Updated: 2025/05/09 17:28:49 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != NULL)
	{
		if (begin_list->data != NULL)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}