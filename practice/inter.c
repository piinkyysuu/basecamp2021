/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 18:14:03 by thle              #+#    #+#             */
/*   Updated: 2021/06/17 19:45:17 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		check_if_duplicate(char *str, int x)
{
	int temp;

	temp = 0;
	while (temp < x)
	{
		if (str[x] == str[temp])
		{
			temp = -1;
			break ;
		}
		temp++;
	}
	return (temp);
}

void	inter(char *str1, char *str2)
{
	int x;
	int y;
	int temp;

	x = 0;
	y = 0;
	temp = 0;
	while (str1[x] != '\0')
	{
		if (check_if_duplicate(str1, x) != -1)
			while (str2[y] != '\0')
			{
				if (str1[x] == str2[y])
				{
					printf("%c", str1[x]);
					break ;
				}
				y++;
			}
		x++;
	}
}

int		main(void)
{
	inter("rien", "cette phrase ne cache rien");
	printf("\n");
	return (0);
}
