/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:11:38 by thle              #+#    #+#             */
/*   Updated: 2021/06/01 19:04:02 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_value(char *str)
{
	unsigned int	index;
	int				acc;

	acc = 0;
	index = 0;
	while (str[index] != '\0')
	{
		acc += str[index];
		index++;
	}
	return (acc);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	if (!str_value(s1))
		return (0 - s2[0]);
	while (i <= n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
