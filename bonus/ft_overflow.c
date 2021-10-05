/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_owerflow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 20:18:12 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 13:38:51 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	ft_sign(const char *str, int sign, int i)
{
	if (str[i] == '-')
	{
		sign = (-1);
		i++;
		return (sign);
	}
	else if (str[i] == '+' && sign != (-1))
	{
		sign = 1;
		i++;
		return (sign);
	}
	return (0);
}

int	ft_owerflow(const char *str)
{
	int				i;
	unsigned long	res;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = ft_sign(str, sign, i);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (res > INT_MAX && sign == 1)
		return (-1);
	if (res > 2147483648 && sign == -1)
		return (0);
	return (1);
}