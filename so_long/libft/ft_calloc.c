/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:30:47 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:09:41 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			x;

	x = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (x < count * size)
		tmp[x++] = 0;
	return (tmp);
}

// void	test_ft_calloc(size_t nmemb, size_t size)
// {
// 	void	*ptr1;
// 	void	*ptr2;

// 	ptr1 = calloc(nmemb, size);
// 	ptr2 = ft_calloc(nmemb, size);
// 	if (ptr1 == NULL && ptr2 == NULL)
// 	{
// 		printf("PASS: calloc(%zu, %zu) == ft_calloc(%zu, %zu) == NULL\n", nmemb,
// 			size, nmemb, size);
// 	}
// 	else if (ptr1 == NULL || ptr2 == NULL)
// 	{
// 		printf("FAIL: One of the allocations failed while the other did not\n");
// 	}
// 	else if (memcmp(ptr1, ptr2, nmemb * size) == 0)
// 	{
// 		printf("PASS: calloc(%zu, %zu) == ft_calloc(%zu, %zu)\n", nmemb, size,
// 			nmemb, size);
// 	}
// 	else
// 	{
// 		printf("FAIL: Memory content mismatch for calloc(%zu,
// 				% zu) and
// 			ft_calloc(% zu, % zu)\n ", nmemb, size, nmemb, size);
// 	}
// 	free(ptr1);
// 	free(ptr2);
// }

// int	main(void)
// {
// 	test_ft_calloc(0, 0);
// 	test_ft_calloc(1, 1);
// 	test_ft_calloc(10, 10);
// 	test_ft_calloc(100, 1);
// 	test_ft_calloc(1, 100);
// 	test_ft_calloc(1000, 1000);
// 	return (0);
// }
