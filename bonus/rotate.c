/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:58:16 by gmckinle          #+#    #+#             */
/*   Updated: 2021/10/05 17:00:29 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rotate(t_elem **head)
{
	t_elem	*tmp;
	t_elem	*tmp_head;

	if (!(*head))
		exit (EXIT_FAILURE);
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
}

void	rb(t_elem **datum_b)
{
	rotate(datum_b);
}

void	rr(t_elem **datum_a, t_elem **datum_b)
{
	rotate(datum_a);
	rotate(datum_b);
}
