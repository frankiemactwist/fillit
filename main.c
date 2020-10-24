/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 17:00:35 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/10/24 21:55:38 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	usage(void)
{
	ft_putendl("usage: ./fillit source_file");
	return (-1);
}

static int	rerror(void)
{
	ft_putendl("error");
	return (-1);
}

static void	free_pieces(t_piece *pieces)
{
	t_piece	*tmp;

	while (pieces)
	{
		tmp = pieces;
		pieces = pieces->next;
		free(tmp);
	}
}

static int	count_pieces(t_piece *plist)
{
	int		count;

	count = 0;
	while (plist)
	{
		plist = plist->next;
		count++;
	}
	return (count);
}

void	solve(t_piece *plist)
{
	int		i;
	int		side;
	char	**square;

	side = 0;
	while (side * side < (count_pieces(plist) * 4))
		side++;
	square = NULL;
	square = make_square(square, side);
	while (!solver(square, plist, side))
		square = make_square(square, ++side);
	i = 0;
	while (square[i] != NULL)
	{
		write(1, square[i], side);
		write(1, "\n", 1);
		free(square[i++]);
	}
	free(square);
}

int		main(int argc, char **argv)
{
	t_piece		*plist;

	if (argc != 2)
		return (usage());
	if ((plist = coordinate(argv[1])) != NULL)
	{
		solve(plist);
		free_pieces(plist);
		return (0);
	}
	else
		return (rerror());
}
