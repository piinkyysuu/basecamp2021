/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:45:59 by thle              #+#    #+#             */
/*   Updated: 2021/06/03 14:39:10 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	long	length;
	int		*array;
	int		index;

	length = max - min;
	if (length <= 0 || length > 2147483647)
		return (NULL);
	array = (int *)malloc(4 * length);
	index = 0;
	while (index < length)
	{
		array[index] = min;
		index++;
		min++;
	}
	return (array);
}
