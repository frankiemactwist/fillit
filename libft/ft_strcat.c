/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:09:00 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/07/07 19:32:20 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	d;

	i = 0;
	d = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[d] = src[i];
		i++;
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
