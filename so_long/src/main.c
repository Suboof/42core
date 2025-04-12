/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:30:00 by cstirber          #+#    #+#             */
/*   Updated: 2025/04/12 17:49:26 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	close_window(void *param)
{
	(void)param;
	exit(0);
}

int	main(void)
{
	void	*mlx;
	void	*win;
	void	*image;
	int		img_width;
	int		img_height;

	mlx = mlx_init();
	if (!mlx)
	{
		write(2, "Error: Failed to initialize MLX\n", 32);
		return (1);
	}

	win = mlx_new_window(mlx, 800, 600, "Simple Window");
	if (!win)
	{
		write(2, "Error: Failed to create window\n", 31);
		return (free(mlx), 1);
	}

	image = mlx_xpm_file_to_image(mlx, "test_tile.xpm", &img_width, &img_height);
	if (!image)
	{
		write(2, "Error: Failed to load XPM image\n", 32);
		return (free(win), free(mlx), 1);
	}

	if (!mlx_put_image_to_window(mlx, win, image, 20, 40))
	{
		write(2, "Error: Failed to render image\n", 30);
		return (free(image), free(win), free(mlx), 1);
	}

	mlx_hook(win, 17, 0, close_window, NULL); // Hook for window close event
	mlx_loop(mlx);

	// Free resources (not reached in this example, but good practice)
	free(image);
	free(win);
	free(mlx);
	return (0);
}
