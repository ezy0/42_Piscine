/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:44:42 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/31 19:13:26 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

	cpy = malloc(sizeof(src) + 1);
	if (cpy == 0)
		return (0);
	ft_strcpy(cpy, src);
	return (cpy);
}

/*int	main(void)
{
	char a[] = "1234";
	char *b = ft_strdup(a);

	printf("%s", b);
}*/
