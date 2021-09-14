/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_catching_errors.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:30:29 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/14 14:20:56 by gmckinle         ###   ########.fr       */
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
	/* checking if all are digits */
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			if (ft_isdigit(argv[j][i]) == 0)
				return (1);
			i++;
		}
		j++;
	}
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
	j = 1;
	while((argv[j + 1] != '\0') && (ft_atoi(argv[j]) < ft_atoi(argv[j + 1])))
		j++;
	if (argv[j + 1] == '\0')
		return (1);
	
	return (0);
}