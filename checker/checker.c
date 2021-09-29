/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:29:33 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 15:46:20 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	errors(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr_fd("Error\n", 1);
		exit(EXIT_FAILURE);
	}
	if (ft_catching_errors(argc, argv) == 1)
	{
		ft_putstr_fd("Error\n", 1);
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

void	reading(int argc, char **argv)
{
	char	*line;
	
	while(get_next_line(0, &line))
	{
		
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

	datum_b = NULL;
	errors(argc, argv);
	if (argc > 2)
		ft_filling_stack(argv, &datum_a);
	
	print_list(datum_a, datum_b);
	freeList(&datum_a);
	return (0);
}
