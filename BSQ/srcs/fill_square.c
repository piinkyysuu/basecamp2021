/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 22:34:39 by thle              #+#    #+#             */
/*   Updated: 2021/06/16 19:46:23 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void		fill_square(int **array, t_arr *f_line, t_arr *int_arr)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (x < int_arr->row - 1)
	{
		y = 0;
		while (y < int_arr->col)
		{
			if (array[x][y] == 0)
				ft_putchar(f_line->obs);
			else if (x >= int_arr->x_pos && x <= int_arr->x_ho
			&& y >= int_arr->y_pos && y <= int_arr->y_ho)
				ft_putchar(f_line->full);
			else
				ft_putchar(f_line->emp);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
