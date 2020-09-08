/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:11:08 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/07/07 15:33:54 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;

	n = ft_strlen(s);
	while (n)
	{
		if (*(s + n) == c)
			return ((char *)s + n);
		n--;
	}
	if (*s == c)
		return ((char *)s + n);
	return (NULL);
}
