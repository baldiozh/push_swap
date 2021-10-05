/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_listsize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:52:01 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 13:39:01 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_count_listsize(t_elem *head)
{
	int	size;

	size = 1;
	while (head->next)
	{
		head = head->next;
		size++;
	}
	return (size);
}
