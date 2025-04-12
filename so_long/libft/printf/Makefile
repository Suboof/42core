# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 12:33:26 by cstirber          #+#    #+#              #
#    Updated: 2024/10/14 14:15:25 by cstirber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c \
		wr_char.c \
		wr_str.c \
		wr_nbr.c \
		wr_nbrx.c \
		wr_ptr.c

OBJS = $(SRCS:.c=.o)

AR = ar rcs

CC = gcc

HEADERS = ft_printf.h libft.h

INCS = .

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "Custom printf library created"

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re