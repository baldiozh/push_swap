/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:29:33 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/17 18:03:21 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_result(t_elem *datum_a, t_elem *datum_b)  //don't need when proj is finished
{
	write(1, "\n", 1);
	ft_putstr_fd("A ", 1);
	while(datum_a)
	{
		ft_putnbr(datum_a->value);
		write(1, "-", 1);
		datum_a = datum_a->next;
	}
	write(1, "\n", 1);
	ft_putstr_fd("B ", 1);
	while(datum_b)
	{
		ft_putnbr(datum_b->value);
		write(1, "-", 1);
		datum_b = datum_b->next;
	}
}

void	ft_filling_stack(char **argv, t_elem **head)
{
	int		j;

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
	t_elem *datum_a;
	t_elem *datum_b;
	char **arr = NULL;
	int i;
	int j;

	i = 0;
	j = 1;
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
	// if (argc == 2)
	// {
	// 	while (j < argc)
	// 	{
	// 		arr = ft_split(argv[j], ' ');
	// 		while (arr[i])
	// 		{
	// 			value = ft_atoi(arr[i]);
	// 			printf("value = %d\n", value);
	// 			head = create(value);	//добавить новый узел
	// 			i++;
	// 	}
	// 	j++;
	// 	}	
	// }
	if (argc > 2)
	{
		ft_filling_stack(argv, &datum_a);
	}
	print_result(datum_a, datum_b);

	print_result(datum_a, datum_b);
	return (0);
}