/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber@student.42prague.com <cstirber    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:38:38 by cstirber@st       #+#    #+#             */
/*   Updated: 2024/11/28 13:57:56 by cstirber@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		bsize;

	if (!src)
		return (NULL);
	bsize = ft_strlen(src) + 1;
	str = (char *)malloc(bsize);
	if (NULL == str)
		return (NULL);
	ft_strlcpy(str, src, bsize);
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	s_len;
	size_t	a_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	a_len = ft_strlen(s + start);
	if (a_len < len)
		len = a_len;
	s2 = (char *)malloc((len + 1));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s + start, len + 1);
	return (s2);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	bsize;

	if (!s1 || !s2)
		return (NULL);
	bsize = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = (char *)malloc(bsize);
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
	ft_strlcpy(s3 + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (s3);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	x;

	x = 0;
	if (size > 0)
	{
		while (src[x] && x < (size - 1))
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = 0;
	}
	while (src[x])
		x++;
	return (x);
}
