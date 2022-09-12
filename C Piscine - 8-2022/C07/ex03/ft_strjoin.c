/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:23:59 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/28 10:23:59 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	j = 0;
	i = -1;
	k = 0;
	str = malloc(sizeof(strs));
	if (size == 0)
		return (str);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i + 1 != size)
			str[k++] = sep[j++];
	}
	str[k] = '\0';
	return (str);
}

/*int	main(void)
{
	char **strs;
	char *sep;
	char *result;
	int	i = 0;

	strs = (char **)malloc(3);
	strs[0] = (char *)malloc(sizeof(char) * 4);
	strs[1] = (char *)malloc(sizeof(char) * 4);
	strs[2] = (char *)malloc(sizeof(char) * 4);

	strs[0] = "123";
	strs[1] = "456";
	strs[2] = "789";
	sep = ", ";
	result = ft_strjoin(3, strs, sep);
	while (result[i] != '\0')
		write (1, &result[i++], 1);
}*/
