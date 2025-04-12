/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:23:28 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 22:31:56 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rewrite(int n, int cnt, char *new)
{
	int	x;

	x = 0;
	while (cnt >= 0 && new[cnt] != '-')
	{
		x = n % 10;
		n = n / 10;
		new[cnt] = (x + 48);
		cnt--;
	}
}

static int	count(int nbr)
{
	int	x;

	x = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		x++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		cnt;

	cnt = 0;
	cnt = count(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	new = (char *)malloc((cnt + 1) * sizeof(char));
	if (!new)
		return (NULL);
	new[cnt] = '\0';
	cnt = cnt - 1;
	if (n < 0)
	{
		n = n * -1;
		new[0] = '-';
	}
	rewrite(n, cnt, new);
	return (new);
}
// void	test_ft_itoa(int n, const char *expected)
// {
// 	char	*result;

// 	result = ft_itoa(n);
// 	if (strcmp(result, expected) == 0)
// 		printf("Test passed for input %d: %s\n", n, result);
// 	else
// 		printf("Test failed for input %d: expected %s, got %s\n", n, expected,
// 			result);
// 	free(result);
// }

// int	main(void)
// {
// 	test_ft_itoa(0, "0");
// 	test_ft_itoa(123, "123");
// 	test_ft_itoa(-123, "-123");
// 	test_ft_itoa(2147483647, "2147483647");
// 	test_ft_itoa(-2147483648, "-2147483648");
// 	test_ft_itoa(42, "42");
// 	return (0);
// }

// int	main (void)
// {
// 	char	*res;
// 	int	n;

// 	n = -6578;
// 	res = ft_itoa(n);
// 	printf("String: %s\n", res);
// 	free(res);
// 	return(0);
// }