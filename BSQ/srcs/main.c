/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:29:54 by ccariou           #+#    #+#             */
/*   Updated: 2021/06/16 19:47:31 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void		read_input(t_arr *f_line, t_arr *int_arr)
{
	char	buf;
	int		fd;
	int		tmp;

	fd = open(f_line->filename, O_RDWR | O_CREAT | O_TRUNC, 0644);
	while ((tmp = read(0, &buf, 1)) > 0)
	{
		write(fd, &buf, 1);
		if (buf == '\n')
			int_arr->row++;
		else
		{
			if (int_arr->row == 0)
				f_line->length++;
			if (int_arr->row == 1)
				int_arr->col++;
		}
	}
	close(fd);
	crea_board(buf, fd, f_line, int_arr);
}

void		read_file(t_arr *f_line, t_arr *int_arr)
{
	char	buf;
	int		fd;
	int		tmp;

	fd = open(f_line->filename, O_RDONLY);
	while ((tmp = read(fd, &buf, 1)) > 0)
	{
		if (buf == '\n')
			int_arr->row++;
		else
		{
			if (int_arr->row == 0)
				f_line->length++;
			if (int_arr->row == 1)
				int_arr->col++;
		}
	}
	close(fd);
	crea_board(buf, fd, f_line, int_arr);
}

void		if_argv(int argc, char **argv, t_arr *f_line, t_arr *int_arr)
{
	int index;

	index = 1;
	while (argv[index] != '\0')
	{
		if (index > 1)
		{
			f_line = malloc(sizeof(t_arr));
			int_arr = malloc(sizeof(t_arr));
			init_struct(f_line);
			init_struct(int_arr);
		}
		f_line->filename = argv[index];
		read_file(f_line, int_arr);
		free(f_line);
		free(int_arr);
		index++;
		if (index < argc)
			ft_putchar('\n');
	}
}

int			main(int argc, char **argv)
{
	t_arr	*f_line;
	t_arr	*int_arr;
	int		index;

	f_line = malloc(sizeof(t_arr));
	int_arr = malloc(sizeof(t_arr));
	init_struct(f_line);
	init_struct(int_arr);
	index = 1;
	if (argc == 1 && f_line && int_arr)
	{
		f_line->filename = "board.txt";
		read_input(f_line, int_arr);
	}
	else
		if_argv(argc, argv, f_line, int_arr);
	return (0);
}
