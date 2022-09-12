/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:16:52 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/01 09:49:21 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (src[j] != '\0')
		j++;
	if (size == 0)
		return (0);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

/*int	main(void)
{
	char dest[] = "1234";
	char src[] = "abcd";
	
	printf("str original: %s\n", dest);
	printf("%lu\n", strlcpy(dest, src, 5));
	printf("%d\n", ft_strlcpy(dest, src, 5));
	printf("str coiado: %s\n", dest);
}*/
