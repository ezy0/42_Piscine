/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:03:41 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/19 11:05:29 by migmoren         ###   ########.fr       */
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
	if (a > 16)
	{
		ft_printhex(a / 16);
		ft_printhex(a % 16);
	}
	ft_putchar(hex[a]);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;

	i = 1;
	if (size == '0')
		return ;
	ft_printhex(addr);
	write (1, ": ", 2);
	while (addr[i] != '\0')
	{
		if (addr[i - 1] == '\n')
			ft_printhex(addr);
		addr++;
	}
}
