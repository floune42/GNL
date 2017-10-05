/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 16:27:36 by rofourni          #+#    #+#             */
/*   Updated: 2017/10/05 14:34:12 by rofourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int ac, char **av)
{
	int		fd;
	char	**line;

	line = NULL;	
	if (ac == 0)
		return 0;
	fd = open(av[1], O_RDONLY);
	get_next_line(fd, line);
}
