/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 13:54:48 by thle              #+#    #+#             */
/*   Updated: 2021/05/27 16:51:37 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long last;

	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb == 0)
	{
		return ;
	}
	last = nb % 10;
	ft_putnbr(nb / 10);
	ft_putchar(last + '0');
}
