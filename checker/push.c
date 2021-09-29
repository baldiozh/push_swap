/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:29:51 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 13:37:59 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push(t_elem **src, t_elem **dest)
{
	t_elem	*tmp;

	if (!(*src))
		exit(EXIT_FAILURE);
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dest;
	*dest = tmp;
}

void	pa(t_elem **datum_a, t_elem **datum_b)
{
	push(datum_b, datum_a);
	write(1, "pa\n", 3);
}

void	pb(t_elem **datum_a, t_elem **datum_b)
{
	push(datum_a, datum_b);
	write(1, "pb\n", 3);
}
