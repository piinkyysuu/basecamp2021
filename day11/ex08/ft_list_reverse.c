/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:06:21 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 19:15:00 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *previous_node;
	t_list *current_node;
	t_list *head;

	head = *begin_list;
	previous_node = head;
	head = head->next;
	current_node = head;
	previous_node->next = 0;
	while (head)
	{
		head = head->next;
		current_node->next = previous_node;
		previous_node = current_node;
		current_node = head;
	}
	*begin_list = previous_node;
}
