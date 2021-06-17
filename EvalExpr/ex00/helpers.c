/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 12:28:34 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/13 19:42:25 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** FILE COUNTAINS: ft_atoi, ft_strmp, ft_strlen, ft_putnbr, ft_strcmp
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

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int acc;

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
