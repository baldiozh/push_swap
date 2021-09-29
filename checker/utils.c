/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:46:40 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 17:13:40 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	compare(char **line)
{
	if (ft_strncmp(line, "sa\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "pa\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		return (0);
	return (1);
}

void	just_do_it(char **line, t_elem **datum_a, t_elem **datum_b)
{
	if (ft_strncmp(line, "sa\n", 3) == 0)
		sa(datum_a);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		sb(datum_b);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		ss(datum_a, datum_b);
	else if (ft_strncmp(line, "pa\n", 3) == 0)
		pa(datum_a, datum_b);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		pb(datum_a, datum_b);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		ra(datum_a);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		rb(datum_b);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		rr(datum_a, datum_b);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		rra(datum_a);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		rrb(datum_b);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		rrr(datum_a, datum_b);
}