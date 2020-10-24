/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:46:25 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/10/24 21:56:08 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"

typedef struct		s_piece
{
	char			letter;
	int				coords[8];
	int				offx;
	int				offy;
	struct s_piece	*next;
}					t_piece;

int		main(int argc, char **argv);
int		fvalid(char *buf, int ret);
void	move_x(t_piece *piece);
void	move_y(t_piece *piece);
t_piece		*corner(t_piece *piece);
t_piece		*make_pieces(char *buf, char pletter);
t_piece		*make_coords(char *buf, int ret);
t_piece		*coordinate(char *fname);
char	**make_square(char **square, int side);
int		in_square(t_piece *piece, int side, char axis);
int		try_piece(char **square, t_piece *piece);
void	put_piece(t_piece *piece, char **square, char letter);
int		solver(char **square, t_piece *piece, int side);
void	solve(t_piece *plist);

#endif
