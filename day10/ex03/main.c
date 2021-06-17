/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:21:27 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 12:11:23 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_any(char **tab, int (*f)(char*));

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


int if_u(char *str)
{
	int index = 0;

	while(str[index] != '\0')
		index++;

	return index > 2 ? 1 : 0;
}

int morethan50(int number)
{
	if (number > 50)
		return 1;
	else
		return 0;
}

int		main(void)
{
	int rows = 3;
	char **c = calloc (4,sizeof(char*));
	c[0] = "c";
	c[1] = "aaa";
	c[2] = "se";
	int u = ft_any(c, &if_u);

	printf("u is %d\n", u);

	return (0);
}