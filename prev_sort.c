/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prev_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:36:36 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/27 18:35:56 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

static void	ft_swap(int	*a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	*ft_prev_sort(int argc, char **argv)
{
	int		*arr;
	int		i;
	int		j;

	i = 0;
	j = 1;
	arr = malloc(sizeof(int) * (argc - 1));
	while(j < argc)
		arr[i++] = ft_atoi(argv[j++]);
	i = 0;
	while(i != argc - 1)
	{
		j = 0;
		while (j != argc - 2)
		{
			if (arr[j] > arr[j + 1])
				ft_swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
	return (arr);
}