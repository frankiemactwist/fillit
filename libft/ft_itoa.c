/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:27:34 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/07/07 18:05:20 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		nb;

	nb = ft_intlen(n);
	res = ft_strnew(nb);
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			res[nb-- - 1] = '8';
			n = n / 10;
		}
		res[0] = '-';
		n = -n;
	}
	if (n == 0)
		res[--nb] = '0';
	while (n)
	{
		res[nb-- - 1] = n % 10 + '0';
		n = n / 10;
	}
	return (res);
}
