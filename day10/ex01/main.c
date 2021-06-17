/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:21:27 by thle              #+#    #+#             */
/*   Updated: 2021/06/07 12:41:41 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_foreach(int *tab, int length, void(*f)(int));

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

int		main(void)
{
	int tab[20] = {7, 11, 14, 15, 19, 6, 7, 12, 14, 16, 10, 11, 12, 18, 20, 12, 900, 12, 34, 41};
	
	ft_foreach(tab, 20, &ft_putnbr);
	//void (*f)(char);
	//f = &ft_putchar;
	//f('z');

	return (0);
}