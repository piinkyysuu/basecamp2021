/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 07:57:35 by thle              #+#    #+#             */
/*   Updated: 2021/06/03 10:29:50 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char *mallocp;
	char original[12] = "Anh";
	
	mallocp = ft_strdup(original);

	if (mallocp == NULL)
		printf("print null");
	
	return (0);
}