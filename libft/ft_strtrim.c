/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:26:15 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/07/10 22:08:08 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trim;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s);
	while (ft_iswhitespace(s[start]) == 1)
		start++;
	if (s[start] == '\0')
		return (ft_strnew(0));
	while (ft_iswhitespace(s[end - 1]) == 1)
		end--;
	if (end < start)
		end = start;
	trim = (ft_strsub(s, start, end - start));
	return (trim);
}
