/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:09:50 by thle              #+#    #+#             */
/*   Updated: 2021/06/02 12:34:29 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int arg;
	int index;

	index = 0;
	arg = argc - 1;
	while (arg >= 1)
	{
		while (argv[arg][index] != '\0')
		{
			ft_putchar(argv[arg][index]);
			index++;
		}
		index = 0;
		ft_putchar('\n');
		arg--;
	}
	return (0);
}
