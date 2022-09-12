/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:45:19 by migmoren          #+#    #+#             */
/*   Updated: 2022/08/21 13:01:51 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	p;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		p = i;
		if (str[i] == to_find[j])
		{
			while (to_find[j] != '\0' && str[i + j] == to_find[j])
				j++;
		}
		i++;
		if (to_find[j] == '\0')
			return (&str[p]);
	}
	return (0);
}
