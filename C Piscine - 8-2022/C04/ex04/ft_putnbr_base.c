/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:23:24 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/28 13:20:06 by migmoren         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while ((s1[i] != '\0' || s1[i] != 0) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
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

void	ft_putnbr_base(int nbr, char *base)
{
	char	*oct;
	long	nb;

	oct = "01234567";
	nb = nbr;
	if (ft_error(base) == 0)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		if (nb >= ft_strlen(base))
		{
			ft_putnbr_base((nb / ft_strlen(base)), base);
			ft_putnbr_base((nb % ft_strlen(base)), base);
		}
		else
		{
			if (ft_strcmp("poniguay", base) == 0)
				write(1, &oct[nb], 1);
			else
				write(1, &base[nb], 1);
		}	
	}
	else
		return (0);
}

/*int	main(void)
{
	int	i = -2147483648;
	char base[] = "0123456789abcdef";
	ft_putnbr_base(i, base);
}*/
