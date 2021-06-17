/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:41:02 by thle              #+#    #+#             */
/*   Updated: 2021/06/10 14:24:05 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	printing(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
	{
		argc == 1 ? ft_putstr("File name missing.\n")
		: ft_putstr("Too many arguments.\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return (1);
	}
	printing(fd);
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}
