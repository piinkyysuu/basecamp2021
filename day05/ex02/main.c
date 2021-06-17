/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:08:37 by thle              #+#    #+#             */
/*   Updated: 2021/06/02 08:04:54 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);
int		counting_spaces(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char a[] = "--2082712576";
    char b[] = " -21";
    char c[] = "279";
    char d[] = "--467";
    char e[] = "  --4901";
    char f[] = "  +-21";
    char g[] = "+33";
    char h[] = "   +99";
    char i[] = " 1000000";
    char j[] = " 0";
    char k[] = "709   551643";
    char l[] = "++709";
    char m[] = "  3fafd342";

    printf("%s atoi = %d        ft_atoi = %d\n", a, atoi(a), ft_atoi(a));
    printf("%s        atoi = %d        ft_atoi = %d\n", b, atoi(b), ft_atoi(b));
    printf("%s        atoi = %d        ft_atoi = %d\n", c, atoi(c), ft_atoi(c));
    printf("%s        atoi = %d        ft_atoi = %d\n", d, atoi(d), ft_atoi(d));
    printf("%s    atoi = %d        ft_atoi = %d\n", e, atoi(e), ft_atoi(e));
    printf("%s        atoi = %d        ft_atoi = %d\n", f, atoi(f), ft_atoi(f));
    printf("%s        atoi = %d        ft_atoi = %d\n", g, atoi(g), ft_atoi(g));
    printf("%s        atoi = %d        ft_atoi = %d\n", h, atoi(h), ft_atoi(h));
    printf("%s    atoi = %d        ft_atoi = %d\n", i, atoi(i), ft_atoi(i));
    printf("%s        atoi = %d        ft_atoi = %d\n", j, atoi(j), ft_atoi(j));
    printf("%s    atoi = %d    ft_atoi = %d\n", k, atoi(k), ft_atoi(k));
    printf("%s        atoi = %d        ft_atoi = %d\n", l, atoi(l), ft_atoi(l));
    printf("%s        atoi = %d        ft_atoi = %d\n", m, atoi(m), ft_atoi(m));


    return (0);
}
