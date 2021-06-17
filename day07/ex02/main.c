/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:45:51 by thle              #+#    #+#             */
/*   Updated: 2021/06/03 15:37:37 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int i;
	int min = 10;
	int max = 15;
	
	int x = 2;
	int *y;
	int **z;

	y = &x;
	z = &y;
	
	int a = ft_ultimate_range(z ,min , max);

	//printf("%d\n", z[1][2]);
	//printf("address z:	%p\n", &z[1]);
	//printf("address y:	%d\n", y[1]);
	//printf("address x:	%p\n", &x);
	
	i = 0;
	while (i < max - min)
	{
		printf("position:	%d,	value:	%d	", i,y[i]);
		printf("address:	%p\n", &y[i]);
		i++;
	}
	
	return (0);
}