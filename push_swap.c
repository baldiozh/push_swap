/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:29:33 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/14 13:42:42 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_elem *datum_a;		//same as t_elem *head = NULL; 
	char **arr = NULL;
	int i;
	int j;
	// int value;

	i = 0;
	j = 1;
//	write(1, "1", 1);
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
		while(argv[j]) //j = 1
		{
			add_elem_end(ft_atoi(argv[j]), datum_a);
			j++;
		}
	}
	//write(1, "2", 1);
	swap(&datum_a);
	while(datum_a)
	{
		printf("%d-", datum_a->value); //write 
		datum_a = datum_a->next;
	}

	
	return (0);
}