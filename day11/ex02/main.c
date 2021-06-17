/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 05:38:43 by thle              #+#    #+#             */
/*   Updated: 2021/06/09 13:44:24 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

t_list		*ft_create_elem(void *data)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new->data = data;
	new->next = NULL;
	return (new);
}

//int    main(void)
//{
//    t_list    *head;
//    t_list    *p;
//    t_list    *tmp;
//    int        i;
//    int        a[] = {0, 1, 2, 3};
//
//    i = 0;
//    while (i < 3)
//    {
//        p = ft_create_elem(&a[i]);
//        if (i == 0)
//        {
//            head = p;
//            tmp = head;
//        }
//        else
//        {
//            tmp->next = p;
//            tmp = p;
//        }
//        i++;
//    }
//    p = head;
//    i = 0;
//    printf("\n\n -- before --\n");
//    while (p)
//    {
//        printf("p's address = %p\n", p);
//        printf("list[%d]->data    =    %p a[%d]= %p\n", i, p->data, i, &a[i]);
//        printf("list[%d]->next    =    %p\n", i, p->next);
//        i++;
//        p = p->next;
//    }
//    i = 0;
//    ft_list_push_front(&head, &a[3]);
//	p = head;
//    printf("\n\n -- result --\n");
//    while (p)
//    {
//        printf("p's address = %p\n", p);
//        printf("list[%d]->data    =    %p a[%d]= %p\n", i, p->data, i, &a[i]);
//        printf("list[%d]->next    =    %p\n", i, p->next);
//        i++;
//        p = p->next;
//    }
//    return (0);
//}


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
	
	p = head;
	printf("nr4			%p\n", &nr4);
	printf("nr3			%p\n", &nr3);
	printf("nr2			%p\n", &nr2);
	printf("nr1			%p\n\n", &nr1);
	while(p)
	{
		printf("nr data			%p\n", p->data);
		printf("p address:		%p\n", p);
		printf("p_next			%p\n\n", p->next);
		p = p->next;
	}


	return 0;
}