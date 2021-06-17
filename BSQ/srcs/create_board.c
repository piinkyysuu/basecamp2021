/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 20:00:43 by thle              #+#    #+#             */
/*   Updated: 2021/06/16 20:10:57 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_arr		*special_character(char *str, t_arr *f_line)
{
	f_line->full = str[f_line->length - 1];
	f_line->obs = str[f_line->length - 2];
	f_line->emp = str[f_line->length - 3];
	return (f_line);
}

void		crea_board(char buf, int fd, t_arr *f_line, t_arr *int_arr)
{
	char	*character;
	int		**array;

	array = malloc((int_arr->row) * sizeof(int*));
	character = malloc(f_line->length * sizeof(char) + 1);
	fd = open(f_line->filename, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		if (f_line->index < f_line->length)
			character[f_line->index++] = buf;
		else
		{
			special_character(character, f_line);
			if (buf == '\n')
			{
				f_line->y = -1;
				array[++f_line->x] = malloc((int_arr->col) * sizeof(int*));
			}
			array[f_line->x][f_line->y] = (buf == f_line->emp) ? 1 : 0;
		}
		f_line->y++;
	}
	character[f_line->index] = '\0';
	close(fd);
	matrix(array, f_line, int_arr);
}
