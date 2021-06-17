/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:05:38 by ccariou           #+#    #+#             */
/*   Updated: 2021/06/16 20:05:52 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		counting_spaces(char *str)
{
	int i;
	int spaces;

	i = 0;
	spaces = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 8 && str[i] <= 12) || str[i] == 32)
			spaces++;
		else
			return (spaces);
		i++;
	}
	return (spaces);
}

int		ft_atoi(char *str)
{
	int	acc;
	int	i;
	int sign;

	i = counting_spaces(str);
	acc = 0;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
	}
	if (str[i] == '-')
		sign = sign * (-1);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (acc * sign);
		acc = acc * 10 + str[i] - '0';
		i++;
	}
	return (acc * sign);
}

t_arr	*init_struct(t_arr *el)
{
	el->length = 0;
	el->big = 0;
	el->x_ho = 0;
	el->y_ho = 0;
	el->row = 0;
	el->col = 0;
	el->x_pos = 0;
	el->y_pos = 0;
	el->index = 0;
	el->x = -1;
	el->y = 0;
	return (el);
}
