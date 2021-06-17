/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:51:04 by thle              #+#    #+#             */
/*   Updated: 2021/06/13 19:36:18 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
int		ft_atoi(char *str);
int		rush(int x, int y);

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (0);
	}
	int number1 = ft_atoi(argv[1]);
	int number2 = ft_atoi(argv[2]);
	if (number1 <= 0 || number2 <= 0)
	{
		return (0);
	}
	rush(number1, number2);
	return (0);
}
