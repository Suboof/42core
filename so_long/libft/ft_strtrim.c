/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:41:44 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:21:39 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*nst;
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && check(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check(s1[end - 1], set))
		end--;
	len = end - start;
	nst = (char *)malloc(len + 1);
	if (!nst)
		return (NULL);
	ft_strlcpy(nst, s1 + start, len + 1);
	return (nst);
}

// int	main(void)
// {
// 	char	s[]= "jkjkjkjjjkkA dost tpc!jkjkjjjk";
// 	char	set[]= "jk";
// 	char	*res;

// 	printf("Original: %s\n\n", s);
// 	res = ft_strtrim(s, set);
// 	printf("Trimmed: %s\n\n", res);
// 	free(res);
// 	return (0);
// }