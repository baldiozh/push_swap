/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:58:18 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 19:19:40 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
}

void	rrb(t_elem **datum_b)
{
	reverse_rotate(datum_b);
}

void	rrr(t_elem **datum_a, t_elem **datum_b)
{
	reverse_rotate(datum_a);
	reverse_rotate(datum_b);
}
