/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:58:04 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 19:19:16 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap(t_elem **head)
{
	t_elem	*first;
	t_elem	*second;

	first = *head;
	second = (*head)->next;
	first->next = (*head)->next->next;
	second->next = first;
	*head = second;
}

void	sa(t_elem **datum_a)
{
	swap(datum_a);
}

void	sb(t_elem **datum_b)
{
	swap(datum_b);
}

void	ss(t_elem **datum_a, t_elem **datum_b)
{
	sa(datum_a);
	sb(datum_b);
}