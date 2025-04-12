/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:11:05 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 22:16:00 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (n == 0)
		return (0);
	while (x < n && s1[x] && s2[x])
	{
		if (s1[x] != s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		x++;
	}
	if (x < n)
		return ((unsigned char)s1[x] - (unsigned char)s2[x]);
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "Wassup bro";
// 	char	s2[] = "Wassup broski";
// 	int result = ft_strncmp(s1, s2, 15);

// 	if (result < 0)
// 		printf("str1 is less than str2 / %d\n", result);
// 	if (result == 0)
// 		printf("str1 is same as str2 / %d\n", result);
// 	if (result > 0)
// 		printf("str1 is more than str2 / %d\n", result);

// 	int res = strncmp(s1, s2, 10);

// 	if (res < 0)
// 		printf("str1 is less than str2 / %d\n", res);
// 	if (res == 0)
// 		printf("str1 is same as str2 / %d\n", res);
// 	if (res > 0)
// 		printf("str1 is more than str2 / %d\n", res);
// 	return (0);
// }