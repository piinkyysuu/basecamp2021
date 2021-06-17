/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:55:54 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 11:46:55 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *last_element;
	t_list *new_element;

	new_element = ft_create_elem(data);
	last_element = *begin_list;
	if (*begin_list == 0)
		*begin_list = new_element;
	else
	{
		while (last_element->next != 0)
			last_element = last_element->next;
		last_element->next = new_element;
	}
}
