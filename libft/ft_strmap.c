/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:22:05 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/07/05 21:31:11 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = ft_strnew(ft_strlen(s));
	if (tmp == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		tmp[i] = f(s[i]);
		i++;
	}
	return (tmp);
}
