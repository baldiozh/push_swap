/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:30:19 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/16 14:52:13 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

/* инициализация списка */
t_elem *create(int value)
{
	t_elem *tmp;
	
	tmp = (t_elem *)malloc(sizeof(t_elem));	/* выделение памяти под корень списка */
	tmp->value = value; 								/* присваивание значения узлу */
	tmp->next = NULL;									/* присваивание указателю на след элем. знач. NULL */
	return (tmp); 
}

/* добавление узла в начало списка */
void add_elem_start(int value, t_elem *head)
{
	t_elem *tmp;
	
	tmp = (t_elem *)malloc(sizeof(t_elem));
	tmp->value = value;
	tmp->next = head;
}

void add_elem_end(int value, t_elem *head)
{
	t_elem *tmp;
	
	tmp = (t_elem *)malloc(sizeof(t_elem));
	tmp->value = value;
	tmp->next = NULL;
	t_elem *p = head;
	while (p->next != NULL)
		p = p->next;
	p->next = tmp;
}