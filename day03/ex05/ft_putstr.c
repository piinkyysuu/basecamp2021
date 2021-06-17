/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:55:18 by thle              #+#    #+#             */
/*   Updated: 2021/05/29 08:09:46 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}

int main(void)
{
	char *str;
	
	str = "toto";
	
	ft_putstr(str);
	return 0;
}


//nb = 4
int    ft_iterative_factorial(int nb)
{
    long int i;

	i = nb; ///different type of variable
	
	nb = 13;
	OR 

    if ((nb > 1) && (nb <= 12))  
    {	
        nb = nb * ft_iterative_factorial(nb - 1);
        return (nb);
    }
    if (nb == 1)
        return (1);
    else
        return (0);
}

