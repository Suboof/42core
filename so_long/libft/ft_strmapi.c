/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:40:48 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:16:30 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		len;
	int		x;
	char	*new;

	if (!s || !f)
		return (NULL);
	x = 0;
	len = ft_strlen(s);
	new = malloc((len + 1));
	if (!new)
		return (NULL);
	while (x < len)
	{
		new[x] = (*f)(x, s[x]);
		x++;
	}
	new[x] = '\0';
	return (new);
}
// char	my_func(unsigned int i, char c)
// {
// 	return (c + i);
// }

// int	main(void)
// {
// 	char s[] = "A1B2C3";
// 	char *res;

// 	res = ft_strmapi(s, my_func);
// 	printf("%s", res);
// 	free(res);
// 	return (0);
// }