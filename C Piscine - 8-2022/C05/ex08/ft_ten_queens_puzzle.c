/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:29:17 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/28 09:52:02 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*int	abs(int a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}*/

int	*construct(int *sol, int i, int *psol)
{
	int	j;
	int	k;
	int	posible;
	int	candidates;

	j = 0;
	k = 0;
	candidates = 0;
	while (++j < 10)
	{
		posible = 1;
		while (++k < i)
		{
			if (abs(i - k) == abs(j - sol[k]))
				posible = 0;
			if (j == sol[j])
				posible = 0;
		}
		if (posible)
			psol[candidates++] = j;
	}
	return (psol);
}

void	ft_print(int *sol)
{
	int	i;

	i = 0;
	while (i < 10)
		printf("%d", sol[i++]);
}

int	backtracking(int *sol, int i)
{
	int	psol[10];
	int	j;
	int	solutions;

	solutions = 0;
	j = -1;
	if (i == 10)
	{
		ft_print(sol);
		solutions++;
	}
	else
	{
		i++;
		construct(sol, i, psol);
		while (++j < 10)
		{
			sol[i] = psol [j];
			backtracking(sol, i);
		}
	}
	return (solutions);
}

int	ft_ten_queens_puzzle(void)
{
	int	sol[10];
	int	soluciones;

	return (backtracking(sol, 0));
}

/*int	main(void)
{
	printf("%d", ft_ten_queens_puzzle());
}*/
