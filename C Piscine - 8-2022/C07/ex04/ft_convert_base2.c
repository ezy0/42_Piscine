/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:36:49 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/30 08:53:12 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//int		ft_atoi(char *str);
int		ft_strlen(char *str);
//void	ft_putnbr_base(int nbr, char *base);
//int		ft_base(char str, char *base);
//char	*ft_base_dec(char *str, char *base);

int	ft_atoi(char *str)
{
	int		i;
	int		neg;
	int		num;

	i = 0;
	neg = 2;
	num = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ') && str[i] != '\0')
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (neg % 2 == 0)
		return (num);
	else
		return (num * -1);
}

int	ft_base(char str, char *base)
{
	int		i;

	i = -1;
	while (base[++i] != '\0')
		if (str == base[i])
			return (i);
	return (-1);
}

char	*ft_base_dec(char *str, char *base)
{
	int		i;
	char	aux;

	i = -1;
	while (str[++i] != '\0')
	{
		aux = str[i];
		printf("%c", aux);
		printf("%s", base);
		printf("%d", ft_base(aux, base));
		str[i] = (ft_base(aux, base) + '0');
	}
	str[i] = '\0';
	return (str);
}

int	ft_error(char *base)
{
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[++i] != 0)
	{
		j = i;
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
			return (1);
		while (base[++j] != 0)
			if (base[i] == base[j])
				return (1);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		int_nbr;
	char	*nbr_base;

	if (ft_error(base_from) == 1 || ft_error(base_to) == 1)
		return (NULL);
	else
	{
		int_nbr = ft_atoi(ft_base_dec(nbr, base_from));
		printf("%d", int_nbr);
	}
	return (0);
}

/*int	main(void)
{
	char *nbr = "11";
	char *base_from = "0123456789abcdef";
	char *base_to = "0123456789";

	ft_convert_base(nbr, base_from, base_to);
}*/
