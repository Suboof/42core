/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:53:12 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:34:32 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		*((unsigned char *)s + n) = 0;
}

// int main()
// {
// 	char buf[10];

// 	for (int i = 0; i < 10; i++)
// 	{
// 			buf[i] = 'A' + i;
// 	}
// 	printf("Before func.:\n");
// 		for (int i = 0; i < 10; i++)
// 		{
// 			printf("%c\n", buf[i]);
// 		}
// 	ft_bzero (buf, 10);
// 	printf("After func.:\n");
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d\n", buf[i]);
// 	}
// 	return (0);
// }