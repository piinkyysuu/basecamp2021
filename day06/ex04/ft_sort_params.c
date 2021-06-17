/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:54:06 by thle              #+#    #+#             */
/*   Updated: 2021/06/03 07:03:29 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_str_swap(char **s1, char **s2)
{
	char *holder;

	holder = *s1;
	*s1 = *s2;
	*s2 = holder;
}

int		main(int argc, char **argv)
{
	int		arg;
	int		index;

	arg = argc - 1;
	while (arg > 0)
	{
		index = 1;
		while (index < arg)
		{
			if (ft_strcmp(argv[index + 1], argv[index]) < 0)
			{
				ft_str_swap(&argv[index + 1], &argv[index]);
			}
			index++;
		}
		arg--;
	}
	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index++]);
		ft_putchar('\n');
	}
	return (0);
}
