/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 11:19:11 by thle              #+#    #+#             */
/*   Updated: 2021/06/02 12:04:11 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;
	int index;

	a = 0;
	index = 1;
	while (index < argc)
	{
		while (argv[index][a] != '\0')
		{
			ft_putchar(argv[index][a]);
			a++;
		}
		a = 0;
		index++;
		ft_putchar('\n');
	}
	return (0);
}
