/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 15:33:55 by rofourni          #+#    #+#             */
/*   Updated: 2017/10/05 14:48:44 by rofourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int 	ret;
    char	buf[BUFF_SIZE];
	char 	**tmp;

	tmp = line;
	ret = read(fd, buf, BUFF_SIZE);
	ft_putnbr(ret);
	return (0);
}


