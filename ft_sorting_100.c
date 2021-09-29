/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:40:34 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 12:58:44 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_search_elems_place(t_elem **head, int max)
{
	t_elem	*tmp_head;
	int		i;

	i = 0;
	tmp_head = *head;
	while (tmp_head->next)
	{
		if (tmp_head->order == max)
			break ;
		tmp_head = tmp_head->next;
		i++;
	}
	return (i);
}

void	ft_sort_b(t_elem **datum_a, t_elem **datum_b, int *arr)
{
	int	i;
	int	max;
	int	arguments;

	while (*datum_b)
	{
		arguments = (ft_count_listsize(*datum_b)) / 2;
		max = ft_max(datum_b, arr);
		i = ft_search_elems_place(datum_b, max);
		if ((*datum_b)->order == max)
			pa(datum_a, datum_b);
		else if (i <= arguments && (*datum_b)->order != max)
			rb(datum_b);
		else if (i > arguments && (*datum_b)->order != max)
			rrb(datum_b);
	}
}

void	ft_sorting_100(t_elem **datum_a, t_elem **datum_b, int *arr)
{
	int		i;
	int		size;

	i = 0;
	size = ft_count_listsize(*datum_a);
	ft_assign_order(datum_a, arr);
	while (*datum_a)
	{
		if ((*datum_a)->order <= i && i > 1)
		{
			pb(datum_a, datum_b);
			rb(datum_b);
			i++;
		}
		else if ((*datum_a)->order <= (i + 15))
		{
			pb(datum_a, datum_b);
			i++;
		}
		else if ((*datum_a)->order >= i)
			ra(datum_a);
	}
	ft_sort_b(datum_a, datum_b, arr);
}
