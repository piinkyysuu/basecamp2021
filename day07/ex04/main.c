/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:45:51 by thle              #+#    #+#             */
/*   Updated: 2021/06/03 19:13:55 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	char *str;
	str = "I am so tired of this, what can i do?";
	
	
	ft_split_whitespaces(str);
	
	return (0);
}