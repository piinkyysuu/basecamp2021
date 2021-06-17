/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:34:37 by thle              #+#    #+#             */
/*   Updated: 2021/05/30 12:30:00 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_sqrt(int nb)
{
	int sqrt;
	//25 = 5 * 5
	sqrt = 0;
	if (nb <= 0)
		return (0);
	while (sqrt * sqrt < nb)
	{
		sqrt++;
	}
	return (sqrt);
}