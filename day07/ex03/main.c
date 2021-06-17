/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:45:51 by thle              #+#    #+#             */
/*   Updated: 2021/06/03 18:36:23 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	char *str;
	int i = 0;
	
	str = ft_concat_params(argc, argv);

	while (str[i] != 0)
	{
		printf("%c", str[i]);
		i++;
	}
	
	return (0);
}