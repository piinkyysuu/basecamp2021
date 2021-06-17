/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:33:08 by thle              #+#    #+#             */
/*   Updated: 2021/06/01 19:33:58 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_value(char *str)
{
	int index;
	int acc;

	acc = 0;
	index = 0;
	while (str[index] != '\0')
	{
		acc += str[index];
		index++;
	}
	return (acc);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (!str_value(str))
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}
