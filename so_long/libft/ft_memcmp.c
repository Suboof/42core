/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:07:48 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 20:20:28 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*st1;
	unsigned char	*st2;

	x = 0;
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (x < n)
	{
		if ((unsigned char)st1[x] != (unsigned char)st2[x])
			return ((unsigned char)st1[x] - (unsigned char)st2[x]);
		x++;
	}
	return (0);
}
// int main(void)
// {
// 	char str1[] = "Hello, World!";
// 	char str2[] = "Hello, World!";
// 	char str3[] = "Hello, world!";
// 	char str4[] = "Hello, Worle!";

// 	printf("Test 1: %d\n", memcmp(str1, str2, ft_strlen(str1)));
		// Should return 0
// 	printf("Test 2: %d\n", memcmp(str1, str3, ft_strlen(str1)));
		// Should return non-zero
// 	printf("Test 3: %d\n", memcmp(str1, str4, ft_strlen(str1)));
		// Should return non-zero
// 	printf("Test 4: %d\n", memcmp(str1, str4, 7)); // Should return 0

// 	return (0);
// }