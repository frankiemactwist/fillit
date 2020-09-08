/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:08:23 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/07/07 20:09:31 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (0 < n && *s != (unsigned char)c)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	if (0 < n)
	{
		*d = *s;
		d++;
		return ((void*)d);
	}
	return (NULL);
}
