/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:17:32 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/10/24 20:41:35 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	move_x(t_piece *piece)
{
	piece->coords[0] += -1;
	piece->coords[2] += -1;
	piece->coords[4] += -1;
	piece->coords[6] += -1;
}

void	move_y(t_piece *piece)
{
	piece->coords[1] += -1;
	piece->coords[3] += -1;
	piece->coords[5] += -1;
	piece->coords[7] += -1;
}
