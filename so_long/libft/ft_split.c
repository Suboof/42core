/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:51:05 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:34:09 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordc(const char *s, char c)
{
	int	x;
	int	wrdc;

	wrdc = 0;
	x = 0;
	while (s[x])
	{
		while (s[x] && s[x] == c)
			x++;
		if (s[x] && s[x] != c)
		{
			wrdc++;
			while (s[x] && s[x] != c)
				x++;
		}
	}
	return (wrdc);
}

static int	s_malloc(char **res, int pos, int buf)
{
	int	x;

	x = 0;
	res[pos] = malloc(buf);
	if (NULL == res[pos])
	{
		while (x < pos)
			free(res[x++]);
		free(res);
	}
	return (0);
}

static int	fill(char **res, const char *s, char del)
{
	size_t	len;
	int		x;
	int		i;

	x = 0;
	i = 0;
	while (s[x])
	{
		len = 0;
		while (s[x] && s[x] == del)
			x++;
		while (s[x] && s[x] != del)
		{
			x++;
			len++;
		}
		if (len)
		{
			if (s_malloc(res, i, len + 1))
				return (1);
			ft_strlcpy(res[i], s + x - len, len + 1);
			i++;
		}
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		wrdcnt;

	wrdcnt = 0;
	wrdcnt = wordc(s, c);
	res = malloc((wrdcnt + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res[wrdcnt] = NULL;
	if (fill(res, s, c))
		return (NULL);
	return (res);
}
// int	main(void)
// {
// 	char s[] = "Let me split those cheeks";
// 	char **res;
// 	int	x;

// 	x = 0;
// 	res = ft_split(s, ' ');
// 	printf("Original: %s \n\n", s);
// 	printf("word count: %d \n\n", wordc(s, ' '));
// 	printf("Split: \n");
// 	while (res[x])
// 	{
// 		printf("%s\n", res[x]);
// 		free(res[x]);
// 		x++;
// 	}
// 	free(res);
// 	return (0);
// }