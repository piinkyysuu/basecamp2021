/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 15:07:28 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 16:12:12 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*begin_list;
	t_list	*new_element;
	int		index;

	index = 1;
	begin_list = 0;
	while (index < ac)
	{
		new_element = ft_create_elem(av[index]);
		new_element->next = begin_list;
		begin_list = new_element;
		index++;
	}
	return (begin_list);
}
