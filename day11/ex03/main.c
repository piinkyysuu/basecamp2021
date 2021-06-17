/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 05:38:43 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 14:39:23 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);

t_list		*ft_create_elem(void *data)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new->data = data;
	new->next = NULL;
	return (new);
}

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

int main(void)
{
	t_list *head = 0;
	t_list *p;
	int nr1, nr2, nr3,nr4;
	nr1 = 1;
	nr2 = 2;
	nr3 = 3;
	nr4 = 4;

	int i = 1;
	ft_list_push_front(&head, &nr1);
	ft_list_push_front(&head, &nr2);
	ft_list_push_front(&head, &nr3);
	ft_list_push_front(&head, &nr4);
		
	printf("length is: %d", length);
	
	//p = head;
	//printf("nr4			%p\n", &nr4);
	//printf("nr3			%p\n", &nr3);
	//printf("nr2			%p\n", &nr2);
	//printf("nr1			%p\n\n", &nr1);
	//while(p)
	//{
	//	printf("nr data			%p\n", p->data);
	//	printf("p address:		%p\n", p);
	//	printf("p_next			%p\n\n", p->next);
	//	p = p->next;
	//}

	return 0;
}