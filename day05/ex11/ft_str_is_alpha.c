/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:08:43 by thle              #+#    #+#             */
/*   Updated: 2021/06/01 19:17:50 by thle             ###   ########.fr       */
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

int		what_character(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (!str_value(str))
		return (1);
	while (str[i] != 0)
	{
		if (!what_character(str[i]))
			return (0);
		i++;
	}
	return (1);
}
