/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:21:55 by thle              #+#    #+#             */
/*   Updated: 2021/06/10 13:26:40 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *last_element;
	t_list *temp;

	temp = begin_list;
	while (temp)
	{
		if (temp->next == 0)
			break ;
		temp = temp->next;
	}
	last_element = temp;
	return (last_element);
}
