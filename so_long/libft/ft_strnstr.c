/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:53:41 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:29:56 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	x;
	size_t	z;

	if (*lit == '\0')
		return ((char *)big);
	x = 0;
	while (big[x] && x < len)
	{
		z = 0;
		while (lit[z] && big[x + z] && (x + z) < len)
		{
			if (big[x + z] != lit[z])
				break ;
			z++;
		}
		if (lit[z] == '\0')
			return ((char *)&big[x]);
		x++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char s[] = "Stay calm dude";
// 	char p[] = "calm";
// 	char *res = ft_strnstr(s, p, 9);

// 	printf("Result: %s\n", res);
// 	return (0);
// }