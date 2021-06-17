/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:25:03 by thle              #+#    #+#             */
/*   Updated: 2021/06/01 19:31:31 by thle             ###   ########.fr       */
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

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (!str_value(str))
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}
