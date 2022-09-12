/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 08:16:01 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/29 08:16:01 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*cpy;

	cpy = malloc(sizeof (src) + 1);
	if (cpy == 0)
		return (0);
	ft_strcpy(cpy, src);
	return (cpy);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stc;
	int			i;

	i = -1;
	stc = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (stc == NULL)
		return (0);
	while (++i < ac)
	{
		stc[i].size = ft_strlen(av[i]);
		stc[i].str = av[i];
		stc[i].cpy = ft_strdup(av[i]);
	}
	stc[i].str = 0;
	stc[i].cpy = 0;
	return (stc);
}
