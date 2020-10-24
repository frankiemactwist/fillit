/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chekfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:36:41 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/10/23 15:27:32 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		check_dotnhash(char *buf, int c, int c2, int c3)
{
	int		i;

	i = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] != c && buf[i] != c2 && buf[i] != c3)
			return (-1);
		i++;
	}
	return (0);
}

static int		char_countter(char *buf)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < 20)
	{
		if (buf[i] == '\n' && (i + 1) % 5 != 0)
			return (-1);
		if (buf[i] == '#')
			count++;
		if (buf[i] == '\n' && buf[i + 2] == '\n')
			return (-1);
		i++;
	}
	if (count != 4)
		return (-1);
	else
		return (0);
}

static int		valid_tetro(char *buf)
{
	int		i;
	int		con;

	i = 0;
	con = 0;
	while (i < 20)
	{
		if (buf[i] == '#')
		{
			if (buf[i + 1] == '#')
				con++;
			if (buf[i - 1] == '#')
				con++;
			if (buf[i + 5] == '#')
				con++;
			if (buf[i - 5] == '#')
				con++;
		}
		i++;
	}
	if (con != 6 && con != 8)
		return (-1);
	else
		return (0);
}

int		fvalid(char *buf, int ret)
{
	int		i;

	i = 0;
	if (check_dotnhash(buf, '.', '#', '\n') == -1)
		return (0);
	while (i <= ret)
	{
		if (char_countter(buf + i) == -1)
			return (0);
		if (valid_tetro(buf + i) == -1)
			return (0);
		i += 21;
	}
	return (1);
}
