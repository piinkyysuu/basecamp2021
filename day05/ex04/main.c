/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:08:37 by thle              #+#    #+#             */
/*   Updated: 2021/06/01 08:22:41 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>


char	*ft_strncpy(char *dest, char *src, unsigned int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char *dest;
	char *src;
	char *dp1;
	char *rp1;
	char *dp2;
	char *rp2;
	char *dp3;
	char *rp3;
	char *dp4;
	char *rp4;
	char *dp5;
	char *rp5;
	char *dp6;
	char *rp6;
	
	src = "mooha     &&//  ++0813!    ";
	rp2 = "";
	rp3 = "moohabeha";
	rp4 = "          champer \n";
	rp5 = "i want a cat righttttt";
	rp6 = "one more exervise with thiss";

	ft_strncpy(dest, src, 1);
	printf("FT	%s \n", dest);
	strncpy(dest, src, 1);
	printf("C 	%s \n", dest);

	
	return (0);
}