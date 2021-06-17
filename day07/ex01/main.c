/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:45:51 by thle              #+#    #+#             */
/*   Updated: 2021/06/03 14:34:56 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int i;
	int min = -2;
	int max = -3;
	int *a = ft_range(min, max);
	
	printf("%p\n", a);
	
	i = 0;
	while (i < max - min)
	{
		printf("position:	%d,	value:	%d	", i,a[i]);
		printf("address:	%p\n", &a[i]);
		i++;
	}
	
	//printf("position 0, value: %d", a[0]);
	//printf(" address: %p\n", &a[0]);
	//printf("position 1, value: %d", a[1]);
	//printf(" address: %p\n", &a[1]);
	//printf("position 2, value: %d", a[2]);
	//printf(" address: %p\n", &a[2]);
	//printf("position 3, value: %d", a[3]);
	//printf(" address: %p\n", &a[3]);
	//printf("position 4, value: %d", a[4]);
	//printf(" address: %p\n", &a[4]);
	//printf("position 5, value: %d", a[5]);
	//printf(" address: %p\n", &a[5]);


	
	return (0);
}