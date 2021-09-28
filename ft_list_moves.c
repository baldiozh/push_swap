/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:30:19 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/28 18:55:10 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*create(int value)
{
	t_elem	*tmp;

	tmp = (t_elem *)malloc(sizeof(t_elem));
	tmp->value = value;
	tmp->next = NULL;
	return (tmp);
}

t_elem	*add_elem_start(int value, t_elem *head)
{
	t_elem	*tmp;

	tmp = (t_elem *)malloc(sizeof(t_elem));
	tmp->value = value;
	tmp->next = head;
	return (tmp);
}

void	add_elem_end(int value, t_elem *head)
{
	t_elem	*tmp;
	t_elem	*p;

	tmp = (t_elem *)malloc(sizeof(t_elem));
	tmp->value = value;
	tmp->next = NULL;
	p = head;
	while (p->next != NULL)
		p = p->next;
	p->next = tmp;
}
