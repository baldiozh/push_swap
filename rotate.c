/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:58:16 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/15 19:51:45 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_elem **head)
{
	t_elem *tmp;
	t_elem *tmp_head;
	tmp = *head;
	*head = (*head)->next;
	tmp_head = *head;
	while (tmp_head->next)
	{
		tmp_head = tmp_head->next;
	}
	tmp_head->next = tmp;
	tmp_head->next->next = NULL;
}

void	ra(t_elem **datum_a)
{
	rotate(datum_a);
	write(1, "ra\n", 3);
}

void	rb(t_elem **datum_b)
{
	rotate(datum_b);
	write(1, "ra\n", 3);
}

void	rr(t_elem **datum_a, t_elem **datum_b)
{
	rotate(datum_a);
	rotate(datum_b);
	write(1, "rr\n", 3);
}