/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:15:08 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/28 09:43:48 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}

/*int main(void)
{
	printf("%d", ft_recursive_power(4, 7));
}*/
