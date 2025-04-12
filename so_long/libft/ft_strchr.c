/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:16:25 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:10:01 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	x;

	x = 0;
	if (!s)
		return (NULL);
	while (s[x])
	{
		if (s[x] == (char)c)
			return ((char *)(s + x));
		x++;
	}
	if (s[x] == (char)c)
		return ((char *)(s + x));
	return (NULL);
}

// int	main(void)
// {
// 	char *s;

// 	s = "tpc, tak to je konec vole";
// 	printf("%s / %s", ft_strchr(s, 'o'), strchr(s, 'o'));
// 	return (0);
// }