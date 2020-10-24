/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makecoords.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:15:43 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/10/24 20:44:26 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece		*corner(t_piece *piece)
{
	while (piece->coords[0] != 0 && piece->coords[2] != 0 && \
			piece->coords[4] != 0 && piece->coords[6] != 0)
		move_x(piece);
	while (piece->coords[1] != 0 && piece->coords[3] != 0 && \
			piece->coords[5] != 0 && piece->coords[7] != 0)
		move_y(piece);
	piece->offx = 0;
	piece->offy = 0;
	return (piece);
}

t_piece		*make_pieces(char *buf, char pletter)
{
	t_piece	*piece_ptr;
	int		i;
	int		n;

	i = 0;
	n = 0;
	if (!(piece_ptr = (t_piece *)malloc(sizeof(t_piece))))
		return (NULL);
	while (i < 20)
	{
		if (buf[i] == '#')
		{
			if (buf[i] <= 5)
			{
				piece_ptr->coords[n] = i;
				piece_ptr->coords[n + 1] = i / 5;
			}
			piece_ptr->coords[n] = i % 5;
			piece_ptr->coords[n + 1] = i / 5;
			n += 2;
		}
		i++;
	}
	piece_ptr->letter = pletter;
	return (corner(piece_ptr));
}

t_piece		*make_coords(char *buf, int ret)
{
	int		i;
	char	pletter;
	t_piece	*curr;
	t_piece	*start;

	i = 0;
	pletter = 'A';
	while (i < ret)
	{
		if (i == 0)
		{
			start = make_pieces(buf + i, pletter);
			curr = start;
		}
		else
		{
			curr->next = make_pieces(buf + i, pletter);
			curr = curr->next;
		}
		pletter++;
		i += 21;
	}
	curr->next = NULL;
	return (start);
}

t_piece		*coordinate(char *fname)
{
	char	buf[545];
	int		fd;
	int		ret;

	fd = open(fname, O_RDONLY);
	ret = read(fd, buf, 545);
	close(fd);
	if (ret < 19 || ret > 544)
	buf[ret] = '\0';
	if (fvalid(buf, ret) != 1)
		return (NULL);
	return (make_coords(buf, ret));
}
