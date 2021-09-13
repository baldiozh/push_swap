/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_catching_errors.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:30:29 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/13 19:03:44 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_catching_errors(int argc, char **argv) //проверить почему ломает
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 1)
		return (1);
	if (argc > 2)
	{
		while(argv[i])
		{
			if (argv[i] == argv[i + 1])
				return (1);
			while (argv[i][j])	// проверка на посторонние символы
			{
				if (ft_isdigit((int)argv[i][j]) == 0)
					return (1);
				j++;
			}
			i++;
		}
	}
	
	return (0);
}