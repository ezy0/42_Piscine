/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:47:17 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/29 12:51:12 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	nbr;
	long	i;

	nbr = nb;
	i = 0;
	if (nb == 1)
		return (1);
	while (i * i <= nbr)
	{
		if (i * i == nbr)
			return (i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf ("%d", ft_sqrt(4));
}*/
