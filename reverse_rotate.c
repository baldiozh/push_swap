/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:58:18 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/28 20:09:06 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_elem **head)
{
	t_elem	*tmp;
	t_elem	*tmp_head;

	tmp = *head;
	tmp_head = *head;
	while (tmp_head->next)
	{
		tmp_head = tmp_head->next;
	}
	*head = add_elem_start(tmp_head->value, *head);
	remove_last_elem(head);
}

void	rra(t_elem **datum_a)
{
	reverse_rotate(datum_a);
	write(1, "rra\n", 4);
}

void	rrb(t_elem **datum_b)
{
	reverse_rotate(datum_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_elem **datum_a, t_elem **datum_b)
{
	reverse_rotate(datum_a);
	reverse_rotate(datum_b);
	write(1, "rrr\n", 4);
}
