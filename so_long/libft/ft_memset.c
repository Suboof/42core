/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:18:10 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:09:52 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = (unsigned char)c;
	return (s);
}

// int	main(void)
// {
// 	char	v[10];

// 	ft_memset(v, 42, 5);

// 	for (int i = 0; i < 10; ++i)
// 		printf("%d\n", v[i]);
// 	printf("ft_memset-> %p\n\n", ft_memset(v, 42, 5));

// 	memset(v, 21, 5);

// 	for (int i = 0; i < 10; ++i)
// 		printf("%d\n", v[i]);
// 	printf("Real memset-> %p\n", memset(v, 21, 5));
// }