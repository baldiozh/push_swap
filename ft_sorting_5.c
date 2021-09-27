/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:30:29 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/27 20:45:24 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_finding_min(t_elem *head, int *arr) /* value */
{
	t_elem	*tmp_head;
	int		min;
	int		i;

	i = 0;
	min = INT_MAX;
	// tmp_head = *head;
	while(head)
	{
		if(min > head->value)
			min = head->value;
		head = head->next;
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

static void	ft_move_baby(t_elem **head, int i, int argc)
{
	if(i <= 3)
	{
		while (i > 0)
		{
			ra(head);
			i--;
		}
	}
	else
	{
		while (i > 3)
		{
			rra(head);
			i--;
		}
	}
}

void	ft_sorting_5(t_elem **datum_a, t_elem **datum_b, int *arr, int argc)
{
	int		i;
	int		j;
	int		min;
				//сортировка 4
	j = 0;
	while (j < 2)
	{
		min = ft_finding_min(*datum_a, arr);
		printf("min = %d\n", min);
		i = ft_search_elems_place(datum_a, min);
		printf("i = %d\n", i);
		ft_move_baby(datum_a, i, argc);
		pb(datum_a, datum_b);
		j++;
		write(1, "\n", 1);
		ft_putstr_fd("A ", 1);
		while((*datum_a)->next)
		{
			ft_putnbr((*datum_a)->value);
			write(1, "-", 1);
			*datum_a = (*datum_a)->next;
		}
	write(1, "\n", 1);
	}
	ft_sorting_3(datum_a);
	while(j-- > 0)
		pa(datum_a, datum_b);
}
