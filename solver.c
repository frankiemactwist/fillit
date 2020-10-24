/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:35:18 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/10/24 21:47:35 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**make_square(char **square, int side)
{
	int		i;
	int		j;

	if (square != NULL)
	{
		i = 0;
		while (square[i] != NULL)
			free(square[i++]);
		free(square);
	}
	if (!(square = (char **)malloc(sizeof(char *) * (side + 1))))
		return (NULL);
	square[side] = NULL;
	i = 0;
	while (i < side)
	{
		if (!(square[i] = (char *)malloc(sizeof(char) * (side + 1))))
			return (NULL);
		square[i][side] = '\0';
		j = 0;
		while (j < side)
			square[i][j++] = '.';
		i++;
	}
	return (square);
}

int		in_square(t_piece *piece, int side, char axis)
{
	if (axis == 'y')
		return (piece->coords[1] + piece->offy < side &&
				piece->coords[3] + piece->offy < side &&
				piece->coords[5] + piece->offy < side &&
				piece->coords[7] + piece->offy < side);
	else
		return (piece->coords[0] + piece->offx < side &&
				piece->coords[2] + piece->offx < side &&
				piece->coords[4] + piece->offx < side &&
				piece->coords[6] + piece->offx < side);
}

int		try_piece(char **square, t_piece *piece)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	x = piece->coords[i] + piece->offx;
	y = piece->coords[i + 1] + piece->offy;
	while (i <= 6 && square[y][x] == '.')
	{
		i += 2;
		x = piece->coords[i] + piece->offx;
		y = piece->coords[i + 1] + piece->offy;
	}
	return (i != 8);
}

void	put_piece(t_piece *piece, char **square, char letter)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	while (i <= 6)
	{
		x = piece->coords[i] + piece->offx;
		y = piece->coords[i + 1] + piece->offy;
		square[y][x] = letter;
		i += 2;
	}
}

int		solver(char **square, t_piece *piece, int side)
{
	if (!piece)
		return (1);
	piece->offx = 0;
	piece->offy = 0;
	while (in_square(piece, side, 'y'))
	{
		while (in_square(piece, side, 'x'))
		{
			if (!try_piece(square, piece))
			{
				put_piece(piece, square, piece->letter);
				if (solver(square, piece->next, side))
					return (1);
				else
					put_piece(piece, square, '.');
			}
			piece->offx++;
		}
		piece->offx = 0;
		piece->offy++;
	}
	return (0);
}
