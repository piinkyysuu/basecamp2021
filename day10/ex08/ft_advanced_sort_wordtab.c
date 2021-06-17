/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:54:53 by thle              #+#    #+#             */
/*   Updated: 2021/06/08 11:02:58 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		index;
	int		length;
	char	*holder;

	index = 0;
	length = 1;
	while (tab[length] != '\0')
		length++;
	while (length > 0)
	{
		index = 0;
		while (index < length - 1)
		{
			if (cmp(tab[index + 1], tab[index]) < 0)
			{
				holder = tab[index + 1];
				tab[index + 1] = tab[index];
				tab[index] = holder;
			}
			index++;
		}
		length--;
	}
}
