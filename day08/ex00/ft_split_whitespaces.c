/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 19:02:49 by thle              #+#    #+#             */
/*   Updated: 2021/06/08 09:58:11 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_calc(char *str)
{
	int words;
	int i;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\n')
			if (str[i + 1] != ' ' && str[i + 1] != '\t'
				&& str[i + 1] != '\v' && str[i + 1] != '\n')
				words++;
		i++;
	}
	return (words);
}

int		letter_calc(int i, char *str)
{
	int letters;

	letters = 0;
	while (str[i] != 0)
	{
		if ((str[i] == 32 || (str[i] >= 9 && str[i] <= 11)))
			return (letters);
		letters++;
		i++;
	}
	return (letters);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	array = malloc((word_calc(str) * sizeof(char*)) + 1);
	while (str[i] != '\0')
	{
		y = 0;
		if (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\n')
			i++;
		else
		{
			array[x] = malloc((letter_calc(i, str) * sizeof(char)) + 1);
			while (str[i] != ' ' && str[i] != '\t' &&
					str[i] != '\v' && str[i] != '\n' && str[i] != '\0')
				array[x][y++] = str[i++];
			array[x++][y] = '\0';
		}
	}
	array[x] = NULL;
	return (array);
}
