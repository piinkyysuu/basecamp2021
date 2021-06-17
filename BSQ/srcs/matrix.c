/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 05:58:54 by thle              #+#    #+#             */
/*   Updated: 2021/06/16 09:13:31 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_arr		*rules_for_printing(t_arr *int_arr)
{
	int_arr->x_pos = int_arr->x_ho - int_arr->big + 1;
	int_arr->y_pos = int_arr->y_ho - int_arr->big + 1;
	return (int_arr);
}

t_arr		*set_value(t_arr *int_arr, int big, int x, int y)
{
	int_arr->big = big;
	int_arr->x_ho = x;
	int_arr->y_ho = y;
	return (int_arr);
}

void		checking_pos(int **arr, t_arr *int_arr, int x, int y)
{
	arr[x][y] = min_value(arr[x][y - 1], arr[x - 1][y], arr[x - 1][y - 1]) + 1;
	if (arr[x][y] > int_arr->big)
		set_value(int_arr, arr[x][y], x, y);
	else if (arr[x][y] == int_arr->big && x < int_arr->x_ho)
		set_value(int_arr, arr[x][y], x, y);
	else if (arr[x][y] == int_arr->big && x == int_arr->x_ho
	&& y < int_arr->y_ho)
		set_value(int_arr, arr[x][y], x, y);
}

int			matrix(int **arr, t_arr *f_line, t_arr *int_arr)
{
	int x;
	int y;

	x = -1;
	while (++x < int_arr->row - 1)
	{
		y = -1;
		while (++y < int_arr->col)
			if (x == 0 || y == 0 || arr[x][y] == 0)
			{
				if (arr[x][y] > int_arr->big)
					set_value(int_arr, arr[x][y], x, y);
			}
			else
				checking_pos(arr, int_arr, x, y);
	}
	rules_for_printing(int_arr);
	fill_square(arr, f_line, int_arr);
	return (1);
}
