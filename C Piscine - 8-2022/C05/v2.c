#include <unistd.h>
#include <stdio.h>

void	ft_print_int(int *sol)
{
	int		i;

	i = 0;
	while (i <= 9)
	{
		write(1, &sol[i], 1);
		i++;
	}
}

int	*ft_sol(int *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = 1;
		i++;
	}
	return (str);
}

int	ft_queens(int *sol, char *f, char *dp, char *ds, int i)
{
	int		j;
	int		solutions;

	j = -1;
	solutions = 0;
	while (++j < 10)
	{
		if (f[j] == '1' && dp[i - j + 9] == '1' && ds[j + i] == '1')
		{
			sol[i] = j;
			f[j] = '0';
			dp[i - j + 9] = '0';
			ds[j + i] = '0';
			if (i == 9 && ++solutions >= 0)
				ft_print_int(sol);
			else
				ft_queens(sol, f, dp, ds, i + 1);
			f[j] = '1';
			dp[i - j + 9] = '1';
			ds[j + i] = '1';
		}
	}
	return (solutions);
}

int	ft_ten_queens_puzzle(void)
{
	int		sol[10];
	char	*f;
	char	*dp;
	char	*ds;

	f = "1111111111";
	dp = "1111111111111111111";
	ds = "1111111111111111111";
	return (ft_queens(sol, f, dp, ds, 0));
}

int	main(void)
{
	printf("%d", ft_ten_queens_puzzle());
}
