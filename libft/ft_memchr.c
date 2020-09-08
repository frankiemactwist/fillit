/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:08:27 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/07/07 20:58:53 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	x;

	i = 0;
	x = c;
	tmp = (unsigned char *)s;
	while (i < n)
	{
		if (tmp[i] == x)
			return (&tmp[i]);
		i++;
	}
	return (NULL);
}
