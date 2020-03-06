/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <mohamed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:52:12 by mohamed           #+#    #+#             */
/*   Updated: 2020/03/04 10:12:29 by mohamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_image	*image_struct_init(void)
{
	t_image	*image;

	if (!(image = (t_image *)malloc(sizeof(t_image))))
		return (NULL);
	image->img_data = NULL;
	image->img_ptr = NULL;
	image->path = NULL;
	image->bpp = 0;
	image->endian = 0;
	image->size_line = 0;
	image->width = 0;
	image->height = 0;
	return (image);
}

t_sprites	*sprites_struct_init(t_sprite *sprite, double distance)
{
	t_sprites	*sprites;

	if (!(sprites = (t_sprites *)malloc(sizeof(t_sprites))))
		return (NULL);
	sprites->sprite = sprite;
	sprites->distance = distance;
	sprites->next = NULL;
	return (sprites);
}
