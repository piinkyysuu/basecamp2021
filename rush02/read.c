/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:11:10 by thle              #+#    #+#             */
/*   Updated: 2021/06/12 14:16:23 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
#include <stdio.h>
# define BUF_SIZE 1

void	printing(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(fd, &buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		printf("%s", buf);
	}
}

int		main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
	{
		argc == 1 ? printf("File name missing.\n")
		: printf("Too many arguments.\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("open() error\n");
		return (1);
	}
	printing(fd);
	if (close(fd) == -1)
	{
		printf("close() error\n");
		return (1);
	}
	return (0);
}