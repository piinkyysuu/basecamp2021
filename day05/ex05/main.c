/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:08:37 by thle              #+#    #+#             */
/*   Updated: 2021/06/01 12:28:12 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		couting_string(char *to_find)
{
	int i;
	
	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		main(void)
{
	char *str;
	char *substr;
		
	str = "its been tooooooo longggggg";
	substr = "been too";

	printf("str:		%s\n", str);
	printf("substr:		%s\n", substr);
	printf("func:		%s\n\n", strstr(str, substr));

	printf("str:		%s\n", str);
	printf("substr:		%s\n", substr);
	printf("ft_func:	%s\n", ft_strstr(str, substr));
	return 0;	
}