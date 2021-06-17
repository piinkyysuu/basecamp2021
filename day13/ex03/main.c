/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:36:31 by thle              #+#    #+#             */
/*   Updated: 2021/06/11 18:27:44 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *));

void print_node(void *data)
{
	t_btree *node;
	node = data;
	printf("%d\n", *(int*)data);
}

t_btree		*btree_create_node(void *item)
{
	t_btree *new_node;

	new_node = malloc(sizeof(t_btree));
	if (new_node != 0)
	{
		new_node->left = 0;
		new_node->right = 0;
		new_node->item = item;
	}
	return (new_node);
}

int main(void)
{
	t_btree *n1;
	t_btree *n2;
	t_btree *n3;
	t_btree *n4;
	t_btree *n5;
	t_btree *n6;
	void	(*applyf)(void *);

	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	int v4 = 4;
	int v5 = 5;
	int v6 = 6;

	n1 = btree_create_node(&v1);
	n2 = btree_create_node(&v2);
	n3 = btree_create_node(&v3);
	n4 = btree_create_node(&v4);
	n5 = btree_create_node(&v5);
	n6 = btree_create_node(&v6);

	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	n3->left = n6;

	applyf = (void (*)(void *))print_node;

	btree_apply_suffix(n1, applyf);

	//printf("item is %d\n", *(int*)n1->item);
	//printf("right is %p\n", n1->right);
	//printf("left is %p\n", n1->left);

	return 0;
}
