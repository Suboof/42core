/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:55:20 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:33:49 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		if (((unsigned char *)s)[x] == (unsigned char)c)
		{
			return ((void *)&((unsigned char *)s)[x]);
		}
		x++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s[] = "Stop searching for heaven.";
// 	char	*res = ft_memchr(s, 'i', 15);

// 	printf ("fuck this: %c", *res);
// 	return (0);
// }