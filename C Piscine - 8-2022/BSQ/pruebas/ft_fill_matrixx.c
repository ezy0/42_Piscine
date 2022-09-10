/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_matrixx.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 01:19:04 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/31 01:32:00 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include"ft_point.h"
 
void ft_fill_matrix(char *map_str, char **matrix, t_point tonto)
{
	int	i;
	int	j;
	int k;

	i = 0;
	k = 0;
	while (i <= tonto.rows)
	{
		j = 0;
		while(j <= tonto.cols)
			matrix[i][j++] = map_str[k++];
		i++;
	}
}