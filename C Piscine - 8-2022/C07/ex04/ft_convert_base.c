/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:29:57 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/28 11:23:17 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*int	ft_putnbr_base(int nbr, char *base)
{
	int	num;

	num = 0;
	while (nbr > 0)



	return(num);
}*/

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

	i = -1;
	while (str[++i] != '\0')
		str[i] = (ft_base(str[i], base) + '0');
	str[i] = '\0';
	return (str);
}
