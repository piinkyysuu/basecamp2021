/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:08:37 by thle              #+#    #+#             */
/*   Updated: 2021/06/01 05:42:44 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>


char	*ft_strcpy(char *dest, char *src);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char *dest;
	char *src;

	src = "sintisnotimpafdasfasdfasfadsfasfsfdfasdfortant";

	ft_strcpy(dest, src);
	printf("%s ", dest);
	printf("%s ", src);
	printf("%lu", strlen(dest));
	printf("%lu", strlen(src));
	return (0);
}