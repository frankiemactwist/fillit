/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 17:00:35 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/09/14 17:14:35 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		rerror(void)
{
	ft_putendl("error");
	return (-1);
}

int		check_dotnhash(char *buf, int c, int c2)
{
	int		i;

	i = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] != c && buf[i] != c2)
			return (-1);
		i++;
	}
	return (0);
}

int		readfile(char *file)
{
	int		fd;
	char	*buf[BUFF_SIZE];

	fd = open(file, O_RDONLY);
		while (get_next_line(fd, buf))
		{
			if (check_dotnhash(*buf, '.', '#') == -1)
				return (-1);
		}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putendl("usage: ./fillit source_file");
	else
	{
		if (readfile(argv[1]) == -1)
			return (rerror());
	}
	return (0);
}
