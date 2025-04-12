/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:55:40 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:09:50 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	int		x;

// 	x = 0;
// 	if (NULL == src && NULL == dest)
// 		return (NULL);
// 	while (n--)
// 		*((unsigned char *)dest + x++) = *(unsigned char *)src++;
// 	return (dest);
// }

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	if (NULL == src && NULL == dest)
		return (NULL);
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	while (n--)
		*ptr1++ = *ptr2++;
	return ((void *)dest);
}

// int	main(void)
// {
// 	char	v[] = "hello";
// 	char	v1[] = "World";

// 	printf("%s ->%p\n", v,  ft_memcpy(v, v1, 3));

// 	printf("%s ->%p\n", v,  memcpy(v, v1, 3));
// }