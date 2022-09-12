/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 07:57:59 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/24 09:51:13 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2", 2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else if (nb <= 9)
	{
		ft_putchar (nb + '0');
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		return ;
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
}*/
