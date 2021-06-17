/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:21:27 by thle              #+#    #+#             */
/*   Updated: 2021/06/07 13:55:25 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		last;
	long	number;

	number = nb;
	if (number < 0)
	{
		number = number * (-1);
		ft_putchar('-');
	}
	if (number >= 10)
	{
		last = number % 10;
		ft_putnbr(number / 10);
		ft_putchar(last + '0');
	}
	else
		ft_putchar(number + '0');
}

int	ft_plusone(int number)
{
	return number + 1;
}

int		main(void)
{
	int tab[20] = {7, 11, 14, 15, 19, 6, 7, 12, 14, 16, 10, 11, 12, 18, 20, 12, 900, 12, 34, 41};
	int *array = malloc(sizeof(int) * 20);
	
	//ft_foreach(tab, 20, &ft_putnbr);
	//void (*f)(char);
	//f = &ft_putchar;
	//f('z');
	array = ft_map(tab, 20, &ft_plusone);

	for (int i = 0; i < 20; i++)
	{
		printf("number is: %d\n", array[i]);
	}
	

	return (0);
}