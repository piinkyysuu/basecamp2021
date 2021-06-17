/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:24:48 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 18:09:10 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*node;
	int		index;

	node = begin_list;
	if (!begin_list)
		return (0);
	while (node)
	{
		node = node->next;
		index++;
	}
	node = begin_list;
	if (nbr > index || nbr < 1)
		return (0);
	index = 0;
	while (index++ < nbr - 1)
		node = node->next;
	return (node);
}
