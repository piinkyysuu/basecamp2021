/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 06:57:08 by thle              #+#    #+#             */
/*   Updated: 2021/06/01 19:00:14 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_length(char *to_find)
{
	int i;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		compare(int i, char *str, char *to_find, int length)
{
	int y;

	y = 0;
	while (length > 0)
	{
		if (str[i] != to_find[y])
			return (0);
		if (str[i] == to_find[y])
		{
			i++;
			y++;
			length--;
		}
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (str_length(to_find) == 0)
		return (str);
	if (str_length(str) < str_length(to_find))
		return (NULL);
	while (str[x] != '\0')
	{
		if ((str[x] == to_find[y]) && (str[x + 1] == to_find[y + 1]))
		{
			if (compare(x, str, to_find, str_length(to_find)))
				return (&str[x]);
		}
		x++;
	}
	return (NULL);
}
