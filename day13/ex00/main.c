/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:36:31 by thle              #+#    #+#             */
/*   Updated: 2021/06/11 15:10:47 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item);

int main(void)
{
	t_btree *head;
	int i = 42;

	head = btree_create_node(&i);

	printf("item is %d\n", *(int*)head->item);
	printf("right is %p\n", head->right);
	printf("left is %p\n", head->left);

	return 0;
}
