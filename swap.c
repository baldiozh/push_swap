/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:58:04 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/15 17:42:11 by gmckinle         ###   ########.fr       */
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

void	sa(t_elem **datum_a)
{
	// int	size;
	// while ((*datum_a)->next)
	// 	size++;
	// if (size < 2)
	// 	return ;
	// else
	swap(datum_a);
	write(1, "sa\n", 3);
}

void	sb(t_elem **datum_b)
{
	// int	size;
	// while ((*datum_b)->next)
	// 	size++;
	// if (size < 2)
	// 	return ;
	// else
	swap(datum_b);
	write(1, "sb\n", 3);
}

void	ss(t_elem **datum_a, t_elem **datum_b)
{
	sa(datum_a);
	sb(datum_b);
	write(1, "ss\n", 3);
}