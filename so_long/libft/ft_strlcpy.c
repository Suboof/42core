/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:50:59 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:10:06 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	x;

	x = 0;
	if (size > 0)
	{
		while (src[x] && x < (size - 1))
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = 0;
	}
	while (src[x])
		x++;
	return (x);
}

// int	main(void)
// {
// 	char			*dest;
// 	char			*sour;
// 	unsigned int	z;

// 	z = 0;
// 	dest = "damn bruh";
// 	sour = "im completely cooked";
// 	while (dest[z])
// 		z++;
// 	printf("%s\n", dest);
// 	printf("%d\n", ft_strlcpy(dest, sour, z));
// 	return (0);
// }
