/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:10:18 by ccariou           #+#    #+#             */
/*   Updated: 2021/06/15 22:15:00 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
** FILE COUNTAINS: ft_putchar, ft_putnbr, ft_strcmp, ft_putstr, min_value
*/

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
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

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		acc;

	i = 0;
	acc = 0;
	while (s1[i] != '\0')
		acc += s1[i++];
	if (!acc)
		return (0 - s2[0]);
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int			min_value(int number1, int number2, int number3)
{
	if (number1 < number2)
		number2 = number1;
	return (number2 < number3 ? number2 : number3);
}
