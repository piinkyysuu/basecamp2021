/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:01:37 by thle              #+#    #+#             */
/*   Updated: 2021/05/29 17:28:23 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int last;

	if (nb == 0)
	{
		ft_putchar(0);
	}
	last = nb % 10;
	ft_putnbr(nb / 10);
	ft_putchar(last + '0');
}

void	ft_strlen(char *str)
{
	int i;
	int counter;

	counter = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
		counter++;
	}
	if (counter < 9)
	{
		ft_putchar(counter + '0');
	}
	else
	{
		ft_putnbr(counter);
	}
}
