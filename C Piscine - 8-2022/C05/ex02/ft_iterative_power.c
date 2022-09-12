/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:03:13 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/28 09:41:40 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	i = 1;
	num = nb;
	if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i < power)
	{
		nb = nb * num;
		i++;
	}
	return (nb);
}

/*int main(void)
{
	printf("%d", ft_iterative_power(4, 7));
}*/
