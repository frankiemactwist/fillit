/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 17:00:35 by fpitkaja          #+#    #+#             */
/*   Updated: 2020/09/09 15:05:53 by fpitkaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int    rerror(void)
{
    ft_putendl("error");
    return (-1);
}

int 	*check_dotnhash(const char *s, int c, int c2)
{
    while (*s != '\0')
	{
		if (*s != c || *s != c2)
			return (-1);
		s++;
	}
	return (0);
}

int     main(int argc, char **argv)
{
    int     fd;
    char    buf[BUFF_SIZE];

    if (argc != 2)
        ft_putendl("usage: ./fillit source_file");
    else
    {
        fd = open(argv[1], O_RDONLY);
        while (get_next_line(fd, buf))
        {
            if (check_dotnhash(buf, '.', '#') == -1)
                return (rerror);
        }
    }
    return (0);   
}
