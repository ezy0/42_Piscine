/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 08:22:03 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/30 15:48:35 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

t_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (i < par[i].size)
	{
		ft_print(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_print(par[i].cpy);
		ft_putchar('\n');
		i++;
	}
}

/*int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}*/
