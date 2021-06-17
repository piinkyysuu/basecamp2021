/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:21:27 by thle              #+#    #+#             */
/*   Updated: 2021/06/07 15:10:28 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_count_if(char **tab, int (*f)(char*));

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

	return index < 4 ? 1 : 0;
}



int		main(void)
{
	char **c = calloc (10,sizeof(char*));
	c[0] = "cat";
	c[1] = "dogdd";
	c[2] = "use";
	c[3] = "cow";
	c[4] = "eagle";
	int u = ft_count_if(c, &if_u);

	printf("u is %d\n", u);

	return (0);
}