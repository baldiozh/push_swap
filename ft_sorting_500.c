/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_500.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:43:27 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/28 18:51:45 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorting_500(t_elem **datum_a, t_elem **datum_b, int *arr, int argc)
{
	t_elem	*tmp_head;
	int		size;
	int		i;

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
		else if ((*datum_a)->order <= (i + 30))
		{
			pb(datum_a, datum_b);
			i++;
		}
		else if ((*datum_a)->order >= i)
			ra(datum_a);
	}
	ft_sort_b(datum_a, datum_b, argc, arr);
}
