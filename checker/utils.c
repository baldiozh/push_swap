/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:46:40 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 16:59:21 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	compare(char **line)
{
	if (ft_strncmp(line, "sa\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "pa\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		return (0);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		return (0);
	return (1);
}
