/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:05:50 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/28 20:09:01 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_elem *datum_a, t_elem *datum_b)
{
	write(1, "\n", 1);
	ft_putstr_fd("A ", 1);
	while (datum_a)
	{
		ft_putnbr(datum_a->value);
		write(1, "-", 1);
		datum_a = datum_a->next;
	}
	write(1, "\n", 1);
	ft_putstr_fd("B ", 1);
	while (datum_b)
	{
		ft_putnbr(datum_b->value);
		write(1, "-", 1);
		datum_b = datum_b->next;
	}
}
