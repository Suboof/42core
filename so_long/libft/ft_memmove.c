/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:39:15 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 21:58:42 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	x;

	if (NULL == src && NULL == dest)
		return (dest);
	if (dest > src)
	{
		while (n--)
			*((unsigned char *)dest + n) = *((const unsigned char *)src + n);
	}
	else if (dest < src)
	{
		x = 0;
		while (x < n)
		{
			*((unsigned char *)dest + x) = *((const unsigned char *)src + x);
			x++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	s[] = "Almost almond milk";

// 	printf ("%s\n", (char *)ft_memmove(s + 7, s, 6));
// 	return (0);
// }