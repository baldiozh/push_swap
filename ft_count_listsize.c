/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_listsize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:52:01 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/16 16:35:42 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int		ft_count_listsize(t_elem **head)
{
	int size;
	
	size = 1; //that's head
	while((*head)->next)
	{
		*head = (*head)->next;	
		size++;
	}
	return (size);
}