/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:11:37 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/17 12:18:11 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_array(int a[], int n)
{
	int	mostrar;
	int	i;

	mostrar = 1;
	i = 0;
	while (++i < n)
		if (a[i - 1] >= a[i])
			mostrar = 0;
	if (mostrar)
	{
		i = -1;
		while (++i < n)
			ft_putchar(a[i] + '0');
		if (a[0] < (10 - n))
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int		a[10];
	int		i;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (++i < n)
		a[i] = i;
	while (a[0] <= 10 - n)
	{
		ft_print_array(a, n);
		a[n - 1]++;
		i = n;
		while (i > 1)
		{
			i--;
			if (a[i] > 10 - (n - i))
			{
				a[i - 1]++;
				a[i] = 0;
			}
		}	
	}
}
