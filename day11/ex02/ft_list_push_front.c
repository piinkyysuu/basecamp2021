/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:25:17 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 13:54:10 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_element;

	new_element = ft_create_elem(data);
	if (*begin_list == 0)
		*begin_list = new_element;
	else
	{
		new_element->next = *begin_list;
		*begin_list = new_element;
	}
}
