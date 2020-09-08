/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:27:05 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/07/08 13:10:45 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wrdlen(char const *s, char c, size_t start)
{
	size_t	i;

	i = 0;
	while (s[start] != c && s[start] != '\0')
	{
		i++;
		start++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	**split;

	if (s == NULL)
		return (NULL);
	split = ((char **)ft_memalloc(sizeof(char*) * (ft_wordcnt(s, c) + 1)));
	if (split == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		n = wrdlen(s, c, i);
		if (n)
		{
			split[j++] = ft_strncpy(ft_strnew(n), &s[i], n);
			i = i + n;
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}
