/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:29:33 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/28 12:45:02 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_filling_stack(char **argv, t_elem **head)
{
	int	j;

	j = 1;	
	*head = create(ft_atoi(argv[j++]));
	while(argv[j])
	{
		add_elem_end(ft_atoi(argv[j]), *head);
		j++;
	}	
}

int main(int argc, char **argv)
{
	t_elem	*datum_a;
	t_elem	*datum_b;
	int		*arr;

	if (argc == 1)
	{
		ft_putstr_fd("Error: too few arguments!\n", 1);
		exit(EXIT_FAILURE);
	}
	if (ft_catching_errors(argc, argv) == 1)
	{
		ft_putstr_fd("Error: alphas, doubles or sorted!\n", 1);
		exit(EXIT_FAILURE);
	}
	arr = ft_prev_sort(argc, argv);
	if (argc > 2)
		ft_filling_stack(argv, &datum_a);
	if (argc == 3) /* 2 */
		sa(&datum_a);
	else if (argc == 4) /* 3 */
		ft_sorting_3(&datum_a);
	else if (argc == 5 || argc == 6) /* 4-5 */
		ft_sorting_4_5(&datum_a, &datum_b, argc);
	else if (argc > 6 && argc < 102) /* 5-101 */
		ft_sorting_100(&datum_a, &datum_b, arr, argc);
	else if (argc > 101) /* 101-500-? */
		ft_sorting_500(&datum_a, &datum_b, arr, argc);
	print_list(datum_a, datum_b);
	return (0);
}