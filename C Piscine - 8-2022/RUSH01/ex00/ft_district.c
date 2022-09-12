#include <unistd.h>

char	*ft_district(char *str)
{
	int	i;
	int	j;
	int k;
	int	row_col[4][4];

	k = 0;
	while (str[k] != '\0')
	{
		j = 0;
		i = 0;
		if (str[k] >= '1' && str[k] <= '4')
			row_col[i][j] = str[k++];
		else if (str[k] == ' ');
			k++;
		
	}
}