/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:01:05 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/30 13:05:00 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_error(char *base)
{
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (-1);
	while (base[++i] != 0)
	{
		j = i;
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
			return (-1);
		while (base[++j] != 0)
			if (base[i] == base[j])
				return (-1);
	}
	return (i);
}

char	*ft_clean(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			while (str[i + 1] != '\0')
			{
			str[i] = str[i + 1];
			i++;
			}
			if (str[i + 1] == '\0' && str[i] == ' ')
				str[i] = '\0';
			i = -1;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_base(char str, char *base)
{
	int	i;

	i = -1;
	while (base[++i] != '\0')
		if (str == base[i])
			return (i);
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 0;
	num = 0;
	ft_clean(base);
	if (ft_error(base) != -1)
	{
		while (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			&& str[i] != '\0')
			i++;
		while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
		{
			if (str[i++] == '-')
				neg++;
		}
		while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
			num = num * ft_strlen(base) + ft_base(str[i++], base);
		if (neg % 2 == 1)
			return (num * -1);
		return (num);
	}
	return (0);
}

int	main(void)
{
	char	base[] = "abd";
	char 	a[] = "abd";	

	printf("%d", ft_atoi_base(a, base));
}
