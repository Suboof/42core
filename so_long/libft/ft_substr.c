/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 14:22:54 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 22:08:24 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	a_len;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	a_len = ft_strlen(s + start);
	if (a_len < len)
		len = a_len;
	s2 = (char *)malloc((len + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s + start, len + 1);
	return (s2);
}

// int	main(void)
// {
// 	char s[] = "Vocode kamo, na chillek ne?";
// 	char *res;

// 	printf("Original: %s\n\n", s);
// 	res = ft_substr(s, 7, ft_strlen(s));
// 	printf("Substring: %s\n", res);
// 	free(res);
// 	return (0);
// }