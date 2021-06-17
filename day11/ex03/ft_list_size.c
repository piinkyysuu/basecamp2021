/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:53:51 by thle              #+#    #+#             */
/*   Updated: 2021/06/10 13:20:08 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		length;
	t_list	*temp;

	length = 0;
	temp = begin_list;
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	return (length);
}
