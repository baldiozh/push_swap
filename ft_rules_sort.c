/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:29:51 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/15 14:08:52 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_elem **head)
{
	t_elem *first;
	t_elem *second;
	
	first = *head;
	second = (*head)->next;
	first->next = (*head)->next->next;
	second->next = first;
	*head = second;
}

void	push(t_elem **head)
{
	
}