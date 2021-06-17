/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:40:09 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/16 20:05:29 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef	struct		s_array
{
	int				length;
	int				big;
	int				index;
	int				x_pos;
	int				y_pos;
	int				x_ho;
	int				y_ho;
	int				x;
	int				y;
	int				row;
	int				col;
	char			emp;
	char			obs;
	char			full;
	char			*filename;
}					t_arr;

/*
**helpers
*/
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					ft_strcmp(char *s1, char *s2);
int					ft_atoi(char *str);
int					counting_spaces(char *str);
int					min_value(int number1, int number2, int number3);
t_arr				*init_struct(t_arr *el);
void				ft_print_wspace(char c);

/*
**main functions
*/
void				fill_square(int **array, t_arr *f_line, t_arr *int_arr);
void				read_input(t_arr *f_line, t_arr *int_arr);
void				crea_board(char buf, int fd, t_arr *f_line, t_arr *int_arr);
int					matrix(int **arr, t_arr *f_line, t_arr *int_arr);
t_arr				*special_character(char *str, t_arr *f_line);
t_arr				*rules_for_printing(t_arr *int_arr);

#endif
