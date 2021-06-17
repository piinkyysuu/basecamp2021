/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:08:37 by thle              #+#    #+#             */
/*   Updated: 2021/06/08 10:13:47 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		main(void)
{
	char *s1 = "";
	char *s2 = "3fwaefc";
	
	printf("ft	%d\n",ft_strcmp(s1, s2));
	printf("C	%d\n",strcmp(s1, s2));
	
	//printf("%d\n",strcmp("a", "a"));
	//printf("%d\n",strcmp("a", "b"));
	//printf("%d\n",strcmp("a", "c"));
	//printf("%d\n",strcmp("z", "d"));
	//printf("%d\n",strcmp("abc", "abe"));
	//printf("%d\n",strcmp("apples", "apple"));
	
	return 0;	
}