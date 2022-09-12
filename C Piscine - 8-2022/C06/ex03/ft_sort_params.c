/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:20:11 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/28 10:09:18 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *a, char *b)
{
	int		i;

	i = 0;
	while ((a[i] != '\0' || b[i] != '\0') && a[i] == b[i])
		i++;
	return (a[i] - b[i]);
}

int	main(int argc, char *argv[])
{
	char	*aux;
	int		i;
	int		j;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] = aux;
			}
		}
	}
	i = 0;
	while (++i < argc)
	{
		write (1, argv[i], ft_strlen(argv[i]));
		write (1, "\n", 1);
	}	
}
