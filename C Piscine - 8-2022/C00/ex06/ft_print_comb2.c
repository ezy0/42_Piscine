/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:26:33 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/13 17:33:22 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		a[2];

	a[0] = 0;
	while (a[0] < 99)
	{
		a[1] = a[0] + 1;
		while (a[1] < 100)
		{
			ft_putchar((a[0] / 10) + '0');
			ft_putchar((a[0] % 10) + '0');
			ft_putchar(' ');
			ft_putchar((a[1] / 10) + '0');
			ft_putchar((a[1] % 10) + '0');
			if (!(a[0] == 98 && a[1] == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			a[1]++;
		}
		a[0]++;
	}
}
