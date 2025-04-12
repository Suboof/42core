# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 18:24:13 by cstirber          #+#    #+#              #
#    Updated: 2025/04/12 17:50:06 by cstirber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Imlx -Iinclude

MLX_PATH = mlx/

MLX_LIB = $(MLX_PATH)libmlx.a

MLX_FLAGS = -Lmlx -lmlx -lXext -lX11 -lm

LIBFT_PATH = libft/

LIBFT_LIB = $(LIBFT_PATH)libft.a

PRINTF_PATH = libft/printf/

PRINTF_LIB = $(PRINTF_PATH)ft_printf.a

R = "\033[31m"

SRC_FILES = main.c map.c

SRC = $(addprefix src/, $(SRC_FILES))

OBJ_DIR = obj

OBJ = $(SRC:src/%.c=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o: src/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -Imlx -c -o $@ $<

INCLUDE = -I ./include/

CFLAGS += $(INCLUDE)

# OBJ = $(SRC:.c=.o)

all: subsystems $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -Imlx -c -o $@ $<

subsystems:
	@make -C $(MLX_PATH) all
	@make -C $(LIBFT_PATH) all

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(MLX_LIB) $(LIBFT_LIB) $(MLX_FLAGS) -o $(NAME)

clean:
	make -C $(MLX_PATH) clean
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJ)
	rm -r $(OBJ_DIR)

fclean: clean
	make -C $(MLX_PATH) fclean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all

norm:
	norminette libft main.c map.c

.PHONY: all clean fclean re norm