/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:22:39 by cstirber          #+#    #+#             */
/*   Updated: 2025/04/13 19:18:46 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This project will be commented af, cause I'll be carving the C language back into my smooth brain, thx for understanding

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../mlx/mlx.h" // MiniLibX
# include <stdlib.h> // malloc/free
# include <unistd.h> // write
# include <fcntl.h> // open/read
# include <stdio.h> //remove later and use your own printf pls
# include "../libft/libft.h"
# include "../libft/printf/ft_printf.h"

// Key macros

# ifndef OPEN_DIRECTORY
#  define OPEN_DIRECTORY 00200000
# endif

# ifdef __linux__
#  define KEY_W 119
#  define KEY_S 97
#  define KEY_A 115
#  define KEY_D 100
#  define KEY_ESC 65307
# else
#  define KEY_W 13
#  define KEY_A 0
#  define KEY_S 1
#  define KEY_D 2
#  define KEY_ESC 53
# endif

# define UP 1
# define DOWN -1
# define LEFT -1
# define RIGHT 1

// STRUCT
typedef struct	s_map
{
	char	**map;
	char	*path;
	int		fd;
	int		count_line;
	size_t	len;
	int		p;			// player
	int		e;			// exit
	int		c;			// coll
	int		pos_exit;	// exit possible? (path to exit)
	int		coll;		// collected
}				t_map;

typedef struct	s_img
{
	void	*mlx_img;
	void	*wall;
	void	*player;
	void	*background;
	void	*exit;
	void	*pickup;
	int		width;
	int		height;
	int		line_len;

}				t_img;

typedef struct	s_game
{
	void	*mlx;
	void	*win;
	int		map_width;		// count x		
	int		map_height;		// count y
	int		p_x;		// moves up/down
	int		p_y;		// moves left/right
	int		x;
	int		y;
	int		count_moves;
	t_map	map;
	t_img	img;
}				t_game;

// Functions

void	start_game(t_game *game);
void	load_map(t_game *game, const char *file);
void	render_map(t_game *game);
void	handle_input(int keycode, t_game *game);
void	free_game(t_game *game);					// freeeee mallocccc

// CHECKERS

int	check_ext(char *path);r

#endif
