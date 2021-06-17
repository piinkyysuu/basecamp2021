/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:45:51 by thle              #+#    #+#             */
/*   Updated: 2021/06/08 09:56:29 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> 

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char *str;
	char **array;
	str = " 	  \nbe I amanh    so tired       of this, what can i do?";
	
	int index = 0;
	array = ft_split_whitespaces(str);
	while (array[index] != '\0')
	{
		printf("Array	%d is	%s\n", index, array[index]);
		index++;
	}
	
	return (0);
}