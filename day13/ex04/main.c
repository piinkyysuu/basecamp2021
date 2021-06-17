/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:36:31 by thle              #+#    #+#             */
/*   Updated: 2021/06/12 07:57:51 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));
void print_node(void *data)
{
	t_btree *node;
	node = data;
	printf("%d\n", *(char*)data);
}

int        tree_strcmp(void *s1, void *s2)
{
    char* str1;
    char* str2;
    
    str1 = (char*)s1;
    str2 = (char*)s2;
    while (*str1 == *str2)
    {
        str1++;
        str2++;
        if (*str1 == '\0')
            break ;
    }
    return (*str1 - *str2);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int acc;

	i = 0;
	acc = 0;
	while (s1[i] != '\0')
		acc += s1[i++];
	if (!acc)
		return (0 - s2[0]);
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
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
	int		(*cmpf)(char *, char *);

	char v1 = 'a';
	char v2 = 'b';
	char v3 = 'c';
	char v4 = 'd';
	char v5 = 'f';
	char v6 = 'g';

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
	
	cmpf = (void *)(void *)ft_strcmp;

	btree_insert_data(&n1, n2, cmpf);

	//printf("item is %d\n", *(int*)n1->item);
	//printf("right is %p\n", n1->right);
	//printf("left is %p\n", n1->left);

	return 0;
}
