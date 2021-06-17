/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:14:24 by thle              #+#    #+#             */
/*   Updated: 2021/05/30 19:23:07 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	sastantua(int size)
{
	int base = 7;
	int i;
	int character;
	int count = 2;
	int temp;
	int a = 2;
	int b ;
	
	int con = 6;
	int con1 = 3;
	temp = size;
	if (size % 2 == 0)
		b = 0;
	else
		b = 1;
		
	
	while (a <= size)
	{
		while (count >= 1)
		{
			base = base + con + 2 * con1;
			count--;
			con1++; 
		}
		if (b == 0 && a == temp - 2 )
		{
			count = 2;
		}
		else
			count = 1;
		size-=2;
		con += 2;
	}
	printf("%d ", base);
}

int		main(void)
{
	sastantua(5);
	return (0);
}


