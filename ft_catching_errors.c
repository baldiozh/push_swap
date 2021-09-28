/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_catching_errors.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:30:29 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/28 20:23:20 by gmckinle         ###   ########.fr       */
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
		while (argv[j + i])
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
	while ((argv[j + 1] != '\0') && (ft_atoi(argv[j]) < ft_atoi(argv[j + 1])))
		j++;
	if (argv[j + 1] == '\0')
		return (1);
	return (0);
}

int	ft_check_if_overflow(char **argv) //fix atoi
{
	int	i;

	i = 1;
	// сначала прогнать костыльный атои если он везде возвращает 1 то все ок
	while (argv[i])
	{
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	ft_catching_errors(int argc, char **argv)
{
	int	ret_val;

	if (argc == 1)
		return (1);
	ret_val = ft_checking_if_digits(argv);
	ret_val += ft_checking_if_doubles(argv);
	ret_val += ft_checking_if_sorted(argv);
	ret_val += ft_check_if_overflow(argv); //doesn't work
	if (ret_val > 0)
		return (1);
	return (0);
}
