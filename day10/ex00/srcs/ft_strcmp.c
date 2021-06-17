/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:47:09 by thle              #+#    #+#             */
/*   Updated: 2021/06/02 11:03:03 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (!str_value(s1))
		return (0 - s2[0]);
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
