/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:36:42 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/31 19:13:29 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*range;

	range = malloc((max - min) * 4);
	i = min;
	j = 0;
	if (min >= max)
		return (0);
	while (i < max)
		range[j++] = i++;
	return (range);
}

/*int	main(void)
{
	int *range = ft_range(5, 9);
	int i = 0;
	while (i < 4)
		printf ("%d", range[i++]);
}*/
