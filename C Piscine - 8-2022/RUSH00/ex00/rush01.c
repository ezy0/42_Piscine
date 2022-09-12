/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izarate- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:24:03 by izarate-          #+#    #+#             */
/*   Updated: 2022/08/16 12:23:02 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i++ < y && x >= 1)
	{
		j = 0;
		while (j++ < x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && x != 1 && y != 1))
				ft_putchar('/');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('\\');
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}	
}
