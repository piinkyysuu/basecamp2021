/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:49:46 by thle              #+#    #+#             */
/*   Updated: 2021/06/08 08:25:45 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int x;
	int y;
	int check_order;

	x = 0;
	y = 1;
	check_order = 1;
	while (y < length)
	{
		if (f(tab[y++], tab[x++]) < 0)
		{
			check_order = -1;
			break ;
		}
	}
	x = 0;
	y = 1;
	while (y < length)
	{
		if (check_order == 1 ? f(tab[y], tab[x]) < 0 : f(tab[y], tab[x]) > 0)
			return (0);
		x++;
		y++;
	}
	return (1);
}
