/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:10:04 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/07/15 18:21:45 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;

	i = 0;
	d = 0;
	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (dest[d] != '\0')
		d++;
	while (src[i] != '\0' && (i + d) < size - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + ft_strlen(src));
}
