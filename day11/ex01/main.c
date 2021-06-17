/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 05:38:43 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 11:13:10 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

t_list		*ft_create_elem(void *data)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new->data = data;
	new->next = NULL;
	return (new);
}

int        main(void)
{
    int            a[4] = {0, 1, 2, 3};
    int         i;
    t_list        **dest;
    t_list        *p;
    t_list        *p1 = NULL;

    i = 0;
    dest = malloc(sizeof(*dest) * 3);
    p = dest[i] = malloc(sizeof(t_list));
    while (i < 4)
    {
        dest[i] = malloc(sizeof(t_list) * 3);
        i++;
    }
    i = 0;
    while (i < 3)
    {
        dest[i]->data = &a[i];
        if(i == 2)
            dest[i]->next = NULL;
        else
        dest[i]->next = dest[i + 1];
        i++;
    }
    i = 0;
    printf("\n--- The structs ----\n");
    while (i < 3)
    {
        printf("dest[%d]->data    =    %p a[%d]= %p\n", i, dest[i]->data, i, &a[i]);
        printf("dest[%d]->next    =    %p\n", i, dest[i]->next);
        i++;
    }
    printf("\na[3] = %p\n", &a[3]);
    ft_list_push_back(&dest[0], &a[3]); 
    i = 0;
    printf("\n\n--- The structs after ft_list_push_back ----\n");
    while (i < 3)
    {
		printf("dest[%d] %p\n", i,dest[i]);
        printf("dest[%d]->data    =    %p a[%d]= %p\n", i, dest[i]->data, i, &a[i]);
        printf("dest[%d]->next    =    %p\n\n", i, dest[i]->next);
        i++;
    }
    *p = *dest[2]->next;
    printf("dest[3] = %p\n", dest[2]->next);
    printf("p[%d]->data    =    %p a[%d]= %p\n", i, p->data, 3, &a[3]);
    printf("p[%d]->next    =    %p\n", i, p->next);

	return(0);
}
