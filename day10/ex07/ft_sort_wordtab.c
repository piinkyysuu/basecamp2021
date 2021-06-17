/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:06:08 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 09:53:01 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int acc;

	i = 0;
	acc = 0;
	while (s1[i] != '\0')
		acc += s1[i++];
	if (!acc)
		return (0 - s2[0]);
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		index;
	int		length;
	char	*holder;

	index = 0;
	length = 1;
	while (tab[length] != '\0')
		length++;
	while (length > 0)
	{
		index = 0;
		while (index < length - 1)
		{
			if (ft_strcmp(tab[index + 1], tab[index]) < 0)
			{
				holder = tab[index + 1];
				tab[index + 1] = tab[index];
				tab[index] = holder;
			}
			index++;
		}
		length--;
	}
}
