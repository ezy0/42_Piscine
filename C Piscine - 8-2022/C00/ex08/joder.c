/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   joder.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:22:07 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/14 16:54:22 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void    ft_print_array(int c[], int n)
{
    int     i;

    i = 0;
    while (i < n)
    {
        ft_putchar((c[i]) + '0');
        i++;
    }
    if (c[0] < 10 - n)
        write (1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int i;
	int a[10];

	if (n > 10 || n < 0)
		return ;
	i = -1;
	while (++i < n)
		a[i] = i;
	while (a[0] <= (10 - n) && n >= 1)
	{
		ft_print_array(a, n);
		if (n == 10)
			break ;
		a[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (a[i] > 9)
		{
				a[i - 1]++;
				a[i] = 0;
			}
		}
	}
}

int	main(void)
{
	ft_print_combn(3);
}
