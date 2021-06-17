/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:41:34 by thle              #+#    #+#             */
/*   Updated: 2021/06/01 18:53:19 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		what_character(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (2);
	else if (c >= 48 && c <= 57)
		return (3);
	else
		return (4);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (what_character(str[0]) == 2)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (what_character(str[i]) == 2)
		{
			if (what_character(str[i - 1]) == 4)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
