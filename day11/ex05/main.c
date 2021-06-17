/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 05:38:43 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 16:08:06 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av);

t_list		*ft_create_elem(void *data)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new->data = data;
	new->next = NULL;
	return (new);
}

int main(int argc, char **argv)
{
	t_list *head;
	t_list *temp;
	head = ft_list_push_params(argc, argv);
	temp = head;
	int index = argc - 1;

	while(temp)
	{
		printf("argv %d is %s\n", index, argv[index]);
		printf("argv		%p\n", argv[index]);
		printf("Address		%p\n", temp);
		printf("Data		%p\n", temp->data);
		printf("Next		%p\n\n", temp->next);
		temp = temp->next;
		index--;
	}
	

	return 0;
}