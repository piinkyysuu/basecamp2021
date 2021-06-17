/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:10:43 by thle              #+#    #+#             */
/*   Updated: 2021/06/10 18:17:19 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_error(int number, char *filename)
{
	char *error_message[25];

	error_message[1] = ": Operation not permitted\n";
	error_message[2] = ": No such file or directory\n";
	error_message[21] = ": Is a directory\n";
	ft_putstr("cat: ");
	ft_putstr(filename);
	ft_putstr(error_message[number]);
}

void	reading_arguments(int position, int index, char **argv)
{
	char	buffer;
	char	str[BUF_SIZE + 1];
	int		fd;
	int		error_message;

	while (argv[position] != 0)
	{
		fd = open(argv[position], O_RDONLY);
		error_message = 0;
		while (read(fd, &buffer, 1))
		{
			error_message = errno;
			if (errno != 0)
			{
				print_error(errno, argv[position]);
				break ;
			}
			str[index++] = buffer;
		}
		close(fd);
		position++;
	}
	str[index] = '\0';
	index > 3000 ? ft_putstr("stacksize 32 kbytes") : ft_putstr(str);
}

int		main(int argc, char **argv)
{
	int		position;
	int		index;

	index = 0;
	position = 1;
	if (argc)
		reading_arguments(position, index, argv);
	return (0);
}
