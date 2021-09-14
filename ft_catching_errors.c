/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_catching_errors.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:30:29 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/14 13:47:22 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_catching_errors(int argc, char **argv) //проверить почему ломает
{
	int i;
	int j;

	if (argc == 1)
		return (1);
	j = 1;
	while (argv[j]) //checking doubles
	{
		i = 1;
		while(argv[j + i])
		{
			if (ft_atoi(argv[j]) == ft_atoi(argv[j + i]))
				return (1);
			i++;
		}
		j++;
	}
	
	
	return (0);
}