/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:23:52 by izarate-          #+#    #+#             */
/*   Updated: 2022/08/20 11:58:16 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	rush(int x, int y);

int	my_atoi(char *str)
{
	int	i;
	int	out;

	out = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (10 * out + str[i] - '0' < out)
			return (0);
		out = 10 * out + str[i] - '0';
		i++;
	}
	return (out);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = 5;
	y = 3;
	if (argc != 3)
	{
		write(1, "2 arguments requierd\n", sizeof("2 argumets requierd\n"));
		return (1);
	}
	x = my_atoi(argv[1]);
	y = my_atoi(argv[2]);
	rush(x, y);
	return (0);
}
