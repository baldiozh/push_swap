/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:29:33 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/15 15:50:18 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_elem *datum_a;
	t_elem *datum_b;
	char **arr = NULL;
	int i;
	int j;

	i = 0;
	j = 1;
	datum_a = NULL;
	if (ft_catching_errors(argc, argv) == 1)
		exit(EXIT_FAILURE);
	if (argc == 1)
		exit(1);
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
		datum_a = create(ft_atoi(argv[j++]));
		datum_b = create(7);
		
		while(argv[j]) //j = 1
		{
			add_elem_end(ft_atoi(argv[j]), datum_a);
			j++;
		}
		add_elem_end(6, datum_b);
		add_elem_end(9, datum_b);
	}
	//swap(&datum_a);
	push(&datum_a, &datum_b);
	while(datum_a)
	{
		ft_putnbr(datum_a->value);
		write(1, "-", 1);
		datum_a = datum_a->next;
	}
	write(1, "\n", 1);
	while(datum_b)
	{
		ft_putnbr(datum_b->value);
		write(1, "-", 1);
		datum_b = datum_b->next;
	}

	return (0);
}