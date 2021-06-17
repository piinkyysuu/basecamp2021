/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 06:33:11 by thle              #+#    #+#             */
/*   Updated: 2021/06/03 12:29:16 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	char	*dup_str;

	length = 0;
	while (src[length] != '\0')
		length++;
	dup_str = (char*)malloc(1 * length + 1);
	if (length == 0)
		return (NULL);
	length = 0;
	while (src[length] != 0)
	{
		dup_str[length] = src[length];
		length++;
	}
	dup_str[length] = '\0';
	return (dup_str);
}
