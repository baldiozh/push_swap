/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_listsize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:52:01 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/16 16:19:12 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int		ft_count_listsize(t_elem **head)
{
	int size;

	while((*head)->next)
		size++;
	return (size);
}