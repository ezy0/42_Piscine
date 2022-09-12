/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cont_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:29:12 by alflores          #+#    #+#             */
/*   Updated: 2022/08/31 01:16:40 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include"ft_point.h"

t_point ft_row_map(int fd, t_point coords, char *map_str)
{
	char	reader;
	int		i;
	int		j;
	
	reader = 48;
	i = 0;
	j = 0;
	while (reader != '\0' && reader != '\n')
	{
		while (reader != '\0' && reader != '\n')
		{
			read(fd, &reader, 1);
			map_str[j++] = reader;
			if (i != 0)
			{
				coords.cols = coords.cols + 1;
				i = 0;
			}
		}
		coords.rows = coords.rows + 1;	
		i++;
		read(fd, &reader, 1);
		map_str[j++] = reader;
	}
	coords.rows = coords.rows - 1;
	return (coords);
}