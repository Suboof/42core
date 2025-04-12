/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:03:59 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/01 19:34:43 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	x;

	x = 0;
	while (s[x])
	{
		(*f)(x, &s[x]);
		x++;
	}
}

// void	test_func(unsigned int i, char *c)
// {
// 	*c = *c + i;
// }

// void	run_test(char *input, void (*f)(unsigned int, char *), char *expected)
// {
// 	char	*s;

// 	s = strdup(input);
// 	ft_striteri(s, f);
// 	if (strcmp(s, expected) == 0)
// 		printf("Test passed: %s -> %s\n", input, s);
// 	else
// 		printf("Test failed: %s -> %s (expected %s)\n", input, s, expected);
// 	free(s);
// }

// int	main(void)
// {
// 	run_test("abc", test_func, "ace");
// 	run_test("123", test_func, "135");
// 	run_test("", test_func, "");
// 	run_test("A1B2C3", test_func, "A2C4E6");

// 	return (0);
// }