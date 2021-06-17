/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 08:07:32 by thle              #+#    #+#             */
/*   Updated: 2021/06/01 05:47:24 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		counting_spaces(char *str)
{
	int i;
	int spaces;

	i = 0;
	spaces = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 8 && str[i] <= 12) || str[i] == 32)
			spaces++;
		else
			return (spaces);
		i++;
	}
	return (spaces);
}

int		ft_atoi(char *str)
{
	int	acc;
	int	i;
	int sign;

	i = counting_spaces(str);
	acc = 0;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
	}
	if (str[i] == '-')
		sign = sign * (-1);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (acc * sign);
		acc = acc * 10 + str[i] - '0';
		i++;
	}
	return (acc * sign);
}
