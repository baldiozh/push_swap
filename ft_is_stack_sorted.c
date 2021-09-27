/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_stack_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:44:07 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/27 18:45:48 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_is_stack_sorted(t_elem **head)
{
	t_elem *tmp_head;
	
	tmp_head = *head;
	while(tmp_head->next)
	{
		if (tmp_head->value > tmp_head->next->value)
		{
			ft_putstr_fd("STACK NOT SORTED\n", 1);
			break ;
		}
		tmp_head = tmp_head->next;
	}
}