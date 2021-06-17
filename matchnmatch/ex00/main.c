/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:01:33 by thle              #+#    #+#             */
/*   Updated: 2021/06/06 18:30:08 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		match(char *s1, char *s2);

int		main(void)
{
	char *s1;
	char *s2;
	
	s1 = "i dont understand.c";
	s2 = "*d*.c";
	
	printf("return is %d\n", match(s1, s2));
	
	return (0);
}

