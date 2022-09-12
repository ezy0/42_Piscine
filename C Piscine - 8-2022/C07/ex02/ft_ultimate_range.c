/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:21:30 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/28 10:21:30 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*rng;
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
		return (0);
	rng = malloc(4 * (max - min));
	if (rng == 0)
	{
		*range = 0;
		return (-1);
	}
	while (i < max)
		rng[j++] = i++;
	*range = rng;
	return (max - min);
}

int	main(void)
{
	int *range;
	int i = 0;
	int size = ft_ultimate_range(&range, -2, 3);

	printf("%d\n", size);
	while (i < size)
		printf("%d", range[i++]);
}
