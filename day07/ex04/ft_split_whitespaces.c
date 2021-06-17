/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 19:02:49 by thle              #+#    #+#             */
/*   Updated: 2021/06/04 07:17:27 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> //rmb to delete

int		size_calc(char *str)
{
	int i;
	int white_spaces;
	int letters;
	int size_calc;
	
	i = 0;
	white_spaces = 0;
	letters = 0;
	while (str[i] != 0)
	{
		if (str[i] == 32 || str[i] == 9 || str[i] == 10 || str[i] == 11)
			white_spaces++;
		else
			letters++;
		i++;
	}
	return white_spaces * letters;
}

char	**ft_split_whitespaces(char *str)
{
	char **split;

	printf("%c", src[2]);

	return split;
}