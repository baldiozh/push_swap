/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_4_5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:30:29 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/28 17:15:34 by gmckinle         ###   ########.fr       */
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
			break ;
		tmp_head = tmp_head->next;
		i++;
	}
	return (i);
}

static void	ft_moves(t_elem **datum_a, t_elem **datum_b, int argc)
{
	int	i;
	int	min;
	int	j;
	
	min = ft_finding_min(datum_a);
	
	i = ft_search_place(datum_a, min);
	printf("min[%d] -- %d\n", i, min);
	j = 1;
	if ((i + 1) <= (argc / 2)) {
		while (j++ < (i + 1))
			ra(datum_a);
	} else {
		while (j++ <= (argc - i - 1))
			rra(datum_a);
	}
	pb(datum_a, datum_b);
}

void	ft_sorting_4_5(t_elem **datum_a, t_elem **datum_b, int argc)
{
	int		i;
	int		j;
	int		min;
	
	j = argc;
	while (argc != 4)
		ft_moves(datum_a, datum_b, argc--);
	ft_sorting_3(datum_a);
	pa(datum_a, datum_b);
	if (j == 6)
		pa(datum_a, datum_b);
	ft_is_stack_sorted(datum_a); //-------------------------
}
