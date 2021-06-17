/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:54:35 by thle              #+#    #+#             */
/*   Updated: 2021/05/30 12:38:04 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_manager(int x, int y, int temp_x, int temp_y)
{
	if (y == temp_y || y == 1)
	{
		if (x == temp_x || x == 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (x == temp_x || x == 1)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

int		rush(int x, int y)
{
	int temp_x;
	int temp_y;

	temp_x = x;
	temp_y = y;
	if (x <= 0 || y <= 0)
		return (0);
	while (y >= 1)
	{
		x = temp_x;
		while (x >= 1)
		{
			ft_print_manager(x, y, temp_x, temp_y);
			x--;
		}
		ft_putchar('\n');
		y--;
	}
	return (0);
}
