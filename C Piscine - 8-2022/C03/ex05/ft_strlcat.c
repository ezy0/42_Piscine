/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:26:40 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/23 09:50:54 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;
	unsigned int	ldest;
	unsigned int	lsrc;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	lsrc = ft_strlen(src);
	ldest = i;
	if (size == 0 || size <= ldest)
		return (size + lsrc);
	while (src[j] != '\0' && i < size - ldest - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (ldest + lsrc);
}
