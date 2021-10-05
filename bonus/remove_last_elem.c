/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_last_elem.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:51:54 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 13:38:21 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	remove_last_elem(t_elem **head)
{
	t_elem	*last;
	t_elem	*tmp_head;
	int		size;

	tmp_head = *head;
	size = ft_count_listsize(*head);
	while (size > 2)
	{
		tmp_head = tmp_head->next;
		size--;
	}
	last = tmp_head;
	last = last->next;
	free(last);
	tmp_head->next = NULL;
}
