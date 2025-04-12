/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber@student.42prague.com <cstirber    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:34:17 by cstirber          #+#    #+#             */
/*   Updated: 2024/11/28 14:06:59 by cstirber@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char type, va_list arg)
{
	int	count;

	count = 0;
	if (type == '%')
		count = wr_char('%');
	else if (type == 'c')
		count = wr_char(va_arg(arg, int));
	else if (type == 's')
		count = wr_str(va_arg(arg, char *));
	else if (type == 'p')
		count = wr_ptr(va_arg(arg, void *));
	else if (type == 'd')
		count = wr_nbr((long)va_arg(arg, int), 10);
	else if (type == 'u')
		count = wr_nbr((unsigned int)va_arg(arg, int), 10);
	else if (type == 'i')
		count = wr_nbr((int)va_arg(arg, int), 10);
	else if (type == 'x')
		count = wr_nbr((long)va_arg(arg, unsigned int), 16);
	else if (type == 'X')
		count = wr_nbrx((long)va_arg(arg, unsigned int), 16);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;

	if (!format)
		return (-1);
	va_start(arg, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += print_format(*++format, arg);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(arg);
	return (count);
}
