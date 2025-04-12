/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:51:29 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:12:28 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		bsize;

	bsize = ft_strlen(src) + 1;
	str = malloc(bsize);
	if (NULL == str)
		return (NULL);
	ft_strlcpy(str, src, bsize);
	return (str);
}

// int	main(void)
// {
// 	char *strings[] = {"Naser si vole", "Hello, World!", "42 is the answer", "",
// 		"Another example string"};

// 	int i = 0;
// 	while (i < 5)
// 	{
// 		char *res_ft = ft_strdup(strings[i]);
// 		char *res_orig = strdup(strings[i]);

// 		printf("Original string: %s\n", strings[i]);
// 		printf("ft_strdup result: %s\n", res_ft);
// 		printf("strdup result: %s\n", res_orig);

// 		free(res_ft);
// 		free(res_orig);

// 		printf("\n");
// 		i++;
// 	}
// 	test_ft_strdup();
// 	return (0);
// }