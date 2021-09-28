/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_4_5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:30:29 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/28 14:28:21 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_finding_min(t_elem **head)
{
	t_elem	*tmp_head;
	int		min;
	int		i;

	i = 0;
	min = INT_MAX;
	tmp_head = *head;
	while(tmp_head)
	{
		if(min > tmp_head->value)
			min = tmp_head->value;
		tmp_head = tmp_head->next;
	}
	return (min);
}

static int	ft_search_place(t_elem **head, int min)
{
	t_elem	*tmp_head;
	int		i;

	i = 0;
	tmp_head = *head;
	while(tmp_head->next)
	{
		if (tmp_head->value == min)
		{
			i++;
			break ;
		}
		tmp_head = tmp_head->next;
		i++;
	}
	return (i);
}

static void	ft_moves(t_elem **datum_a, t_elem **datum_b, int min, int i)
{
	while (1)
	{
		if ((*datum_a)->value != min)
		{
			pb(datum_a, datum_b);
			break ;
		}
		else if (i <= 2 && (*datum_a)->value != min)
			while (i++ <= 2)
				ra(datum_a);
		else if (i >= 2 && (*datum_a)->value != min)	
			while (i-- >= 2)
				rra(datum_a);
	}

}

void	ft_sorting_4_5(t_elem **datum_a, t_elem **datum_b, int argc)
{
	int		i;
	int		j;
	int		min;
	
	if (argc == 5)
		j = 1;
	else
		j = 0;
	while (j < 2)
	{
		ft_moves(datum_a, datum_b, min, i);
		j++;
	}
	ft_sorting_3(datum_a);
	if (argc == 5)
		pa(datum_a, datum_b);
	else 
		while(j-- > 0)
			pa(datum_a, datum_b);
	ft_is_stack_sorted(datum_a); //-------------------------
}
