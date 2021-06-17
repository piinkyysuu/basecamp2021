/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:21:27 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 12:16:12 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int comparision(int number_1, int number_2)
{
	return number_1 - number_2;
}


int		main(void)
{
	int tab[20] = {5,4,2,3,1};
	
	int u = ft_is_sort(tab, 5, &comparision);
	printf("%d\n", u);

	return (0);
}