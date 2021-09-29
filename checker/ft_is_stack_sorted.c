/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_stack_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:44:07 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 19:29:01 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_is_stack_sorted(t_elem **head)
{
	t_elem	*tmp_head;

	tmp_head = *head;
	while (tmp_head->next)
	{
		if (tmp_head->value > tmp_head->next->value)
		{
			ft_putstr_fd("KO\n", 1);
			break ;
		}
		tmp_head = tmp_head->next;
	}
	if (tmp_head->next == NULL)
		ft_putstr_fd("OK\n", 1);
}
