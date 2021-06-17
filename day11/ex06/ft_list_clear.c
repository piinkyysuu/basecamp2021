/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:47:09 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 18:08:44 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *head;
	t_list *node;

	head = *begin_list;
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
	*begin_list = NULL;
}
