/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:01:29 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 22:38:05 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	z;

	x = ft_strlen(src);
	z = ft_strlen(dst);
	if (z >= dstsize)
		z = dstsize;
	if (z == dstsize)
		return (dstsize + x);
	if (x < dstsize - z)
		ft_memcpy(dst + z, src, x + 1);
	else
	{
		ft_memcpy(dst + z, src, dstsize - z - 1);
		dst[dstsize - 1] = '\0';
	}
	return (z + x);
}
// int		main(void)
// {
// 	char dest [5] = "Hello";
// 	const char *src =  " World";

// 	size_t res = ft_strlcat(dest, src, sizeof(dest));

// 	printf ("Concatenated string: %s\n", dest);
// 	printf ("Lenght: %zu\n", res);

// 	return (0);
// }