/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 08:59:38 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/01 10:04:47 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_printhex(int a)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (a >= 16)
	{
		ft_printhex(a / 16);
		ft_printhex(a % 16);
	}
	ft_putchar(hex[a]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_printhex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*int	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
}*/
