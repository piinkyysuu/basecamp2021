/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:15:27 by thle              #+#    #+#             */
/*   Updated: 2021/06/08 19:48:08 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t;

struct node {
	int value;
	struct node* next;
};


void print_list(node_t *head)
{
	node_t *temporary = head;

	while(temporary != NULL)
	{
		printf("%d - ", temporary -> value);
		temporary = temporary -> next;
	}
	printf("\n");
}

int main(){
	node_t *n1, n2, n3, n4;
	node_t *head;
	
	n1 = malloc(sizeof(node_t));
	n1->value = 1;
	n2.value = 2;
	n3.value = 3;
	n4.value = 4;

	//link them up
	head = n1;
	n1->next = &n2;
	n2.next = &n3;
	n3.next = &n4; //so we know when to stop
	n4.next = NULL;
	
	//head = head -> next;
	n2.next = &n4;
	n4.next = &n3;
	n3.next = NULL;
	
	print_list(head);

	return 0;
}

//int		main(void)
//{
//	t_list *new;
//	int i = 19;
//
//	new = ft_create_elem(&i);
//	printf("i address: %p\n", &i);
//	printf("new->data :%p\n", new->data);
//	printf("new->next: %p\n", new->next);
//}