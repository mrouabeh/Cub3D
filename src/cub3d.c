/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <mrouabeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 09:24:29 by mrouabeh          #+#    #+#             */
/*   Updated: 2020/02/08 12:51:56 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	game_start(t_game *game)
{
	t_window *win;

	win = game->window;
	win->mlx_ptr = mlx_init();
	win->win_ptr = mlx_new_window(win->mlx_ptr,
									win->width, win->height, "CUB3D");
	mlx_hook(win->win_ptr, KEY_PRESS, 0, &(key_press), game);
	mlx_hook(win->win_ptr, KEY_RELEASE, 0, &(key_release), game);
	mlx_loop(win->mlx_ptr);
}

static void	cub3d(char *map_path, char *option)
{
	t_game *game;

	(void)option;
	game = game_struct_init();
	read_map(map_path, game);
	game_start(game);
}

int			main(int ac, char **av)
{
	if (ac > 3 || ac < 2)
		exit_failure("You must have at least two arguments;\n");
	else if (ac == 2 && !check_args(av[1], NULL))
		cub3d(av[1], NULL);
	else if (ac == 3 && !check_args(av[1], av[2]))
		cub3d(av[1], av[2]);
	return (EXIT_SUCCESS);
}
