/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:12:51 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/06/27 18:25:47 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *s)
{
	int res;
	int i;
	int neg;

	i = 0;
	res = 0;
	neg = 1;
	while (s[i] == 32 || s[i] == 9 || s[i] == 10
			|| s[i] == 11 || s[i] == 12 || s[i] == 13)
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			neg = -1;
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		res = (10 * res) + (s[i] - '0');
		i++;
	}
	return (res * neg);
}
