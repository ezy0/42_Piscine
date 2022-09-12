/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izarate- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:24:03 by izarate-          #+#    #+#             */
/*   Updated: 2022/08/14 19:46:06 by izarate-         ###   ########.fr       */
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
			if ((i == 1 && j == 1) || (i == y && j == 1))
				ft_putchar('A');
			else if ((i == 1 && j == x) || (i == y && j == x))
				ft_putchar('C');
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}	
}
