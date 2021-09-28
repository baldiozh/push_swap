/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:56:01 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/28 18:56:02 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorting_3(t_elem **head)
{
	int	top;
	int	mid;
	int	bot;

	top = (*head)->value;
	mid = (*head)->next->value;
	bot = (*head)->next->next->value;
	if (top > mid && bot > mid && bot > top)
		sa(head);
	else if (top > mid && top > bot && mid > bot)
	{
		sa(head);
		rra(head);
	}
	else if (top > mid && bot > mid && top > bot)
		ra(head);
	else if (top < mid && top < bot && mid > bot)
	{
		sa(head);
		ra(head);
	}
	else if (top < mid && top > bot && mid > bot)
		rra(head);
}
