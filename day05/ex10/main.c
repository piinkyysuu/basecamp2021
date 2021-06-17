/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:08:37 by thle              #+#    #+#             */
/*   Updated: 2021/06/01 18:53:40 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);
void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		main(void)
{
	char s1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(s1));
	//printf("C	%d\n",strncmp(s1, s2, 3));
	
	//printf("%d\n",strcmp("a", "a"));
	//printf("%d\n",strcmp("a", "b"));
	//printf("%d\n",strcmp("a", "c"));
	//printf("%d\n",strcmp("z", "d"));
	//printf("%d\n",strcmp("abc", "abe"));
	//printf("%d\n",strcmp("apples", "apple"));
	
	return 0;	
}