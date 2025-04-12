/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:53:25 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:10:13 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = 0;
	while (s[x])
		x++;
	while (x >= 0)
	{
		if (s[x] == (char)c)
			return ((char *)(s + x));
		x--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *s;

// 	s = "ok ok, i see i you";
// 	printf("%s / %s", ft_strrchr(s, 'i'), strrchr(s, 'i'));
// 	return (0);
// }
