/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:41:55 by thle              #+#    #+#             */
/*   Updated: 2021/05/30 09:06:33 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	long acc;

	acc = 1;
	if (nb > 0)
	{
		while (nb > 0)
		{
			acc = nb * acc;
			nb--;
		}
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (acc);
}
