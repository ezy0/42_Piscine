/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:05:18 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/14 17:26:34 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	if (nb <= 9)
	{
		ft_putchar (nb + '0');
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar ((nb % 10) + '0');
		return ;
	}
}

int	main(void)
{
	ft_putnbr(15);
}
