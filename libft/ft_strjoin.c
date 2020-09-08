/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:26:03 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/07/06 16:48:01 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	t;
	size_t	n;
	char	*join;

	t = 0;
	i = 0;
	n = ft_strlen(s1) + ft_strlen(s2);
	join = ft_strnew(n);
	if (join == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		join[t] = s1[i];
		i++;
		t++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		join[t] = s2[i];
		i++;
		t++;
	}
	return (join);
}
