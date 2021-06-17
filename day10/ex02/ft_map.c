/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:24:46 by thle              #+#    #+#             */
/*   Updated: 2021/06/07 15:25:24 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *array;
	int index;

	index = 0;
	array = (int*)malloc(sizeof(int) * length);
	while (index < length)
	{
		array[index] = f(tab[index]);
		index++;
	}
	return (array);
}
