/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:40:28 by thle              #+#    #+#             */
/*   Updated: 2021/06/03 16:23:02 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	*array;
	int	index;

	length = max - min;
	if (length <= 0 || length > 2147483647)
		return (0);
	array = (int *)malloc(4 * length);
	index = 0;
	while (index < length)
	{
		array[index] = min;
		index++;
		min++;
	}
	*range = array;
	return (length);
}
