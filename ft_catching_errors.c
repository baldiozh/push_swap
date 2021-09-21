/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_catching_errors.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:30:29 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/21 17:04:15 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	ft_checking_if_digits(char **argv)
{
	int	j;
	int	i;

	j = 1;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			if (ft_isdigit(argv[j][i]) == 0 && argv[j][i] != 45)
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

int	ft_checking_if_doubles(char **argv)
{
	int	j;
	int	i;

	j = 1;
	while (argv[j])
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

int	ft_checking_if_sorted(char **argv)
{
	int	j;
	j = 1;
	while((argv[j + 1] != '\0') && (ft_atoi(argv[j]) < ft_atoi(argv[j + 1])))
		j++;
	if (argv[j + 1] == '\0')
		return (1);
	return (0);
}

int	ft_catching_errors(int argc, char **argv)
{
	int ret_val;
	
	if (argc == 1)
		return (1);
	ret_val = ft_checking_if_digits(argv);
	ret_val += ft_checking_if_doubles(argv);
	ret_val += ft_checking_if_sorted(argv);
	if (ret_val > 0)
		return (1);
	return (0);
}