/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmckinle <gmckinle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:30:22 by gmckinle          #+#    #+#             */
/*   Updated: 2021/09/29 13:38:56 by gmckinle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_isdigit(int ch)
{
	if (ch > 47 && ch < 58)
		return (1);
	else
		return (0);
}