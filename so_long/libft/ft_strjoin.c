/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:30:13 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:16:08 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	bsize;

	bsize = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = malloc(bsize);
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
	ft_strlcpy(s3 + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (s3);
}

// int	main(void)
// {
// 	char s[] = "Nachcany hovada v MHD vole. ";
// 	char d[] = "Jooo, ty me pekne serou.";
// 	char *res = ft_strjoin(s, d);

// 	printf("Original: %s \n %s\n\n", s, d);
// 	printf("New : %s \n", res);
// 	free(res);
// 	return (0);
// }