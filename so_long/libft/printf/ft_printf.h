/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:42:14 by cstirber          #+#    #+#             */
/*   Updated: 2024/10/15 11:42:05 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	wr_char(char c);
int	wr_str(char *s);
int	wr_nbr(long n, int base);
int	wr_nbrx(long n, int base);
int	wr_ptr(void *ptr);

#endif
