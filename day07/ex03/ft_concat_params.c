/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:14:28 by thle              #+#    #+#             */
/*   Updated: 2021/06/03 18:47:30 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		counting_length(int argc, char **argv)
{
	int length;
	int index;
	int a;

	length = 0;
	index = 1;
	while (index < argc)
	{
		a = 0;
		if (index != 1)
			length += 2;
		while (argv[index][a++] != '\0')
		{
			length++;
		}
		index++;
	}
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		length;
	int		index;
	int		a;
	int		b;

	b = 0;
	length = counting_length(argc, argv);
	str = (char*)malloc(1 * length + 1);
	index = 1;
	while (index < argc)
	{
		a = 0;
		while (argv[index][a] != '\0')
			str[b++] = argv[index][a++];
		if (index != argc - 1)
		{
			str[b++] = '\\';
			str[b++] = 'n';
		}
		index++;
	}
	str[b] = '\0';
	return (str);
}
