/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:30:14 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/21 18:39:25 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long int	atoi(char *str)
{
	int			i;
	long int	out;

	out = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((10 * out + str[i] - '0' < out) || str[i] < '1' || str[i] > '4')
			return (0);
		out = 10 * out + str[i] - '0';
		i = i + 2;
	}
	return (out);
}

char	*ft_row(long int row_col, char *rows)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		rows[i] = (row_col % 10) + '0';
		row_col = row_col / 10;
		i--;
	}
	return (rows);
}

char	*ft_col(long int row_col, char *col)
{
	int	i;

	i = 7;
	row_col = row_col / (100000000);
	while (i >= 0)
	{
		col[i] = (row_col % 10) + '0';
		row_col = row_col / 10;
		i--;
	}
	return (col);
}

void	ft_write(void)
{
	int	i;

	i = 3;
	while (i-- >= 0)
	{
		write (1, "0 0 0 0", 7);
		write (1, "\n", 1);
	}
}

int	main(int argc, char *argv[])
{
	long int	row_col;
	char		rows[8];
	char		col[8];

	if (argc != 2)
	{
		write (1, "Error", 5);
		return (1);
	}
	else
	{
		row_col = atoi(argv[1]);
		ft_row(row_col, rows);
		ft_col(row_col, col);
		ft_write();
	}
}
