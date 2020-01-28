/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <mrouabeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 09:24:29 by mrouabeh          #+#    #+#             */
/*   Updated: 2020/01/28 09:24:31 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int ac, char **av)
{
	if (ac > 3 || ac < 2)
		ft_puterror("You must have at least two arguments;\n");
	else if (ac == 2 && !check_args(av[1], NULL))
		ft_putnbr(15);
	else if (ac == 3 && !check_args(av[1], av[2]))
		ft_putnbr(13);
	return (EXIT_SUCCESS);
}