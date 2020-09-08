/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:08:25 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/07/07 19:31:30 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;
	char		tmp[n];

	i = 0;
	d = dest;
	s = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = tmp[i];
		i++;
	}
	return (dest);
}
