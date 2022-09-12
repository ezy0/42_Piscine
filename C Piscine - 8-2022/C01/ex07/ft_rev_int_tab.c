/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:53:13 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/14 12:45:41 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux1;
	int	aux2;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		aux1 = tab[i];
		aux2 = tab[j];
		tab[i++] = aux2;
		tab[j--] = aux1;
	}
}
