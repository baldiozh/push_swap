/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:46:40 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 18:42:35 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	compare(char *line)
{
	if (ft_strncmp(line, "sa", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "ss", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "pa", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "pb", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "ra", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rb", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rr", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rra", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "rrb", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "rrr", 4) == 0)
		return (0);
	return (1);
}

void	just_do_it(char **line, t_elem **datum_a, t_elem **datum_b)
{
	printf("%s\n", *line);
	if (ft_strncmp(*line, "sa", 3) == 0)
		sa(datum_a);
	else if (ft_strncmp(*line, "sb", 3) == 0)
		sb(datum_b);
	else if (ft_strncmp(*line, "ss", 3) == 0)
		ss(datum_a, datum_b);
	else if (ft_strncmp(*line, "pa", 3) == 0)
		pa(datum_a, datum_b);
	else if (ft_strncmp(*line, "pb", 3) == 0)
		pb(datum_a, datum_b);
	else if (ft_strncmp(*line, "ra", 3) == 0)
		ra(datum_a);
	else if (ft_strncmp(*line, "rb", 3) == 0)
		rb(datum_b);
	else if (ft_strncmp(*line, "rr", 3) == 0)
		rr(datum_a, datum_b);
	else if (ft_strncmp(*line, "rra", 4) == 0)
		rra(datum_a);
	else if (ft_strncmp(*line, "rrb", 4) == 0)
		rrb(datum_b);
	else if (ft_strncmp(*line, "rrr", 4) == 0)
		rrr(datum_a, datum_b);
}