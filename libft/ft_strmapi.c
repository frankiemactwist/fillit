/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:23:07 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/07/08 13:12:41 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	tmp = ft_strnew(ft_strlen(s));
	if (tmp == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	return (tmp);
}
