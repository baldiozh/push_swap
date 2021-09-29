/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:29:33 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 13:07:51 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errors(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr_fd("Error: too few arguments!\n", 1);
		exit(EXIT_FAILURE);
	}
	if (ft_catching_errors(argc, argv) == 1)
	{
		ft_putstr_fd("Error: alphas, doubles, owerflow or sorted!\n", 1);
		exit(EXIT_FAILURE);
	}
}

void	ft_filling_stack(char **argv, t_elem **head)
{
	int	j;

	j = 1;
	*head = create(ft_atoi(argv[j++]));
	while (argv[j])
	{
		add_elem_end(ft_atoi(argv[j]), *head);
		j++;
	}	
}

void	freeList(t_elem **head)
{
	if ((*head)->next != NULL)
		freeList(&(*head)->next);
	free(*head);
}

int	main(int argc, char **argv)
{
	t_elem	*datum_a;
	t_elem	*datum_b;
	int		*arr;

	datum_b = NULL;
	errors(argc, argv);
	arr = ft_prev_sort(argc, argv);
	if (argc > 2)
		ft_filling_stack(argv, &datum_a);
	if (argc == 3)
		sa(&datum_a);
	else if (argc == 4)
		ft_sorting_3(&datum_a);
	else if (argc == 5 || argc == 6)
		ft_sorting_4_5(&datum_a, &datum_b, argc);
	else if (argc > 6 && argc < 102)
		ft_sorting_100(&datum_a, &datum_b, arr);
	else if (argc > 101)
		ft_sorting_500(&datum_a, &datum_b, arr);
	print_list(datum_a, datum_b);
	freeList(&datum_a);
	free(arr);
	return (0);
}
